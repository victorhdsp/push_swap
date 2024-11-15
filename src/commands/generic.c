/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generic.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:21:48 by vide-sou          #+#    #+#             */
/*   Updated: 2024/11/15 20:08:59 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commands.h"

void    ft_swap(char **stack, size_t id_1, size_t id_2)
{
    char    *tmp;
    if (!stack[id_1] || !stack[id_2])
        return;
    tmp = stack[id_1];
    stack[id_1] = stack[id_2];
    stack[id_2] = tmp;
}

void    ft_roll(char **stack)
{
    size_t  index;

    index = 0;
    while (stack[index + 1])
    {
        ft_swap(stack, index, index + 1);
        index++;
    }
}

void    ft_reverse_roll(char **stack)
{
    size_t  index;

    index = 0;
    while (stack[index + 1])
        index++;
    while (index > 0)
    {
        ft_swap(stack, index, index - 1);
        index--;
    }
}
void    ft_stack(char **stack_1, char **stack_2)
{
    char    *tmp;

    ft_roll(stack_2);
    tmp = stack_2[0];
    stack_2[0] = stack_1[0];
    ft_reverse_roll(stack_1);
}
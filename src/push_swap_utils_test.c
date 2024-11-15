/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:21:48 by vide-sou          #+#    #+#             */
/*   Updated: 2024/11/15 18:35:43 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_print_stack(char **stack, char *name)
{
    size_t  index;

    index = 0;
    ft_printf("---------\n", stack[index]);
    ft_printf("|%7.7s|\n", name);
    ft_printf("---------\n", stack[index]);
    while (stack[index])
    {
        ft_printf("|%7s|\n", stack[index]);
        index++;
    }
    ft_printf("---------\n", stack[index]);
}
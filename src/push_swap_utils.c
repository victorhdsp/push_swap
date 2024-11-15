/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:21:48 by vide-sou          #+#    #+#             */
/*   Updated: 2024/11/15 18:09:55 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_error()
{
    write(1, "Error\n", 6);
    exit(-1);
}

void    *ft_clear_stack(char **stack)
{
    size_t  index;

    index = 0;
    while (stack[index])
    {
        free(stack[index]);
        index++;
    }
    free(stack);
    return (NULL);
}
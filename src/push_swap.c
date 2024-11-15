/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:21:51 by vide-sou          #+#    #+#             */
/*   Updated: 2024/11/15 20:20:46 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int push_swap(int argc, char **argv)
{
    char    **stack_a;
    char    **stack_b;

    stack_a = ft_entrypoint(argc, argv);
    stack_b = ft_create_stack_b(stack_a);
    ft_print_stack(stack_a, "stack a");
    ft_print_stack(stack_b, "stack b");
    //ft_rra(stack_a);
    //ft_clear_stack(stack_a);
    //printf("%s", list_a[0]);
    return (1);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mind.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:44:07 by vide-sou          #+#    #+#             */
/*   Updated: 2024/11/24 12:44:44 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mind.h"

int		ft_get_stack_size(char **stack)
{
	int		index;

	index = 0;
	while (stack[index])
		index++;
	return (index);
}

int ft_check_if_stack_a_is_sorted(char **stack_a)
{
	int		index;

	index = 0;
	while (stack_a[index + 1])
	{
		if (ft_atoi(stack_a[index]) > ft_atoi(stack_a[index + 1]))
			return (0);
		index++;
	}
	return (1);
}

void    ft_go_to_number(char **stack, int target)
{
    int     index;
    int     stack_size;

    index = 0;
    while (ft_atoi(stack[index]) != target)
        index++;
    stack_size = index;
    while (stack[stack_size])
        stack_size++;
    while (ft_atoi(stack[0]) != target)
        if (index <= stack_size / 2)
            ft_ra(stack);
        else
            ft_rra(stack);
}

void    ft_select_sort(char **stack_a, char **stack_b)
{
    int stack_size;

    stack_size = ft_get_stack_size(stack_a);
    if (stack_size < 32)
        ft_order_my(stack_a, stack_b);
    else
        ft_order_radix(stack_a, stack_b);
}
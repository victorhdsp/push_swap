/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:21:51 by vide-sou          #+#    #+#             */
/*   Updated: 2024/11/24 13:13:12 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	push_swap(int argc, char **argv)
{
	char	base_stack;
	char	**stack_a;
	char	**stack_b;

	base_stack = ft_entrypoint(argc, argv);
	stack_b = ft_create_stack_b(stack_a);
	ft_select_sort(stack_a, stack_b);
	//ft_order_my(stack_a, stack_b);
	//ft_go_to_number(stack_a, 5);
	ft_print_stack(stack_a, "stack a");
	//ft_print_stack(stack_b, "stack b");
	ft_clear_stack(stack_a);
	ft_clear_stack(stack_b);
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 08:52:23 by vide-sou          #+#    #+#             */
/*   Updated: 2024/11/26 19:50:42 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stack_value(t_stack_map **stack, char *name)
{
	size_t	index;

	index = 0;
	ft_printf("-----------\n");
	ft_printf("| %7.7s |\n", name);
	ft_printf("-----------\n");
	while (stack[index])
	{
		ft_printf("| %7s |\n", (stack[index])->string);
		index++;
	}
	ft_printf("-----------\n");
}

void	ft_print_stack_index(t_stack_map **stack, char *name)
{
	size_t	index;

	index = 0;
	ft_printf("-----------\n");
	ft_printf("| %7.7s |\n", name);
	ft_printf("-----------\n");
	while (stack[index])
	{
		ft_printf("| %7d |\n", (stack[index])->index);
		index++;
	}
	ft_printf("-----------\n");
}

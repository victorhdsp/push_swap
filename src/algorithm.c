/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:02:09 by vide-sou          #+#    #+#             */
/*   Updated: 2025/01/08 08:29:22 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algorithm.h"

static int	ft_check_stack_sort(t_stack_map **stack, int check)
{
	int	index;

	index = 0;
	while (stack[index] && stack[index]->string)
	{
		if (check == stack[index]->index)
			check++;
		else
			return (0);
		index++;
	}
	return (1);
}

static void	ft_go_to_number(t_stack_map **stack, int target)
{
	int	index;
	int	stack_size;

	index = 0;
	while (stack[index]->index != target)
		index++;
	stack_size = index;
	while (stack[stack_size] && stack[stack_size]->string)
		stack_size++;
	while (stack[0]->index != target)
	{
		if (index <= stack_size / 2)
			ft_ra(stack);
		else
			ft_rra(stack);
	}
}

void	ft_min_three_movs(t_stack_map **stack, int start)
{
	while (!ft_check_stack_sort(stack, start))
	{
		if (stack[0]->index == stack[1]->index + 1 || stack[0]->index
			+ 1 == stack[2]->index)
			ft_sa(stack);
		else if (stack[0]->index - 1 == stack[2]->index
			&& stack[0]->index > stack[1]->index)
			ft_ra(stack);
		else if (stack[0]->index - 1 == stack[2]->index)
			ft_rra(stack);
	}
}

void	ft_min_five_movs(t_stack_map **stack_a, t_stack_map **stack_b)
{
	if (!ft_check_stack_sort(stack_a, 0))
	{
		ft_go_to_number(stack_a, 0);
		ft_pb(stack_a, stack_b);
		ft_go_to_number(stack_a, 1);
		ft_pb(stack_a, stack_b);
		if ((stack_b[0]->string && stack_b[1]->string)
			&& (stack_b[0]->index < stack_b[1]->index))
			ft_rb(stack_b);
		ft_min_three_movs(stack_a, 2);
		while (stack_b[0] && stack_b[0]->string)
			ft_pa(stack_b, stack_a);
	}
}

void	ft_radix(t_stack_map **stack_a, t_stack_map **stack_b)
{
	int	range;
	int	max;
	int	started;

	range = 0;
	max = ft_get_stack_size(stack_a);
	while (!ft_check_stack_sort(stack_a, 0) && (1 << range) <= max)
	{
		started = -1;
		while (stack_a[0]->index != started)
		{
			if ((stack_a[0]->index & (1 << range)) && started == -1)
				started = stack_a[0]->index;
			if (!(stack_a[0]->index & (1 << range)))
				ft_pb(stack_a, stack_b);
			else
				ft_ra(stack_a);
		}
		while (stack_b[0] && stack_b[0]->string)
			ft_pa(stack_b, stack_a);
		range++;
	}
}

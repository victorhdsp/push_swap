/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:21:16 by vide-sou          #+#    #+#             */
/*   Updated: 2024/11/24 12:41:34 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mind.h"

void	ft_order_radix(char **stack_a, char **stack_b)
{
	int		index;
	int		order;
	char	*tmp;

	order = 0;
	while (!ft_check_if_stack_a_is_sorted(stack_a) && order < 8)
	{
		index = 0;
		tmp = NULL;
		while (stack_a[index] && stack_a[index][0])
		{
			if (!(ft_atoi(stack_a[index]) & (1 << order)))
			{
				ft_go_to_number(stack_a, ft_atoi(stack_a[index]));
				ft_pb(stack_a, stack_b);
				index = -1;
			}
			else if (!tmp)
				tmp = stack_a[0];
			index++;
		}
		ft_go_to_number(stack_a, ft_atoi(tmp));
		while (stack_b[0] && stack_b[0][0])
			ft_pa(stack_b, stack_a);
		order++;
	}
}

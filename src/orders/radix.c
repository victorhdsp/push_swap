/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:21:16 by vide-sou          #+#    #+#             */
/*   Updated: 2024/11/22 10:10:45 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_return_b_stack(char **stack_a, char **stack_b)
{
	if (stack_b && stack_b[0])
	{
		if (!stack_b[0][0])
			return (1);
		while (stack_b && stack_b[0] && stack_b[0][0])
			ft_pb(stack_b, stack_a);
	}
	return (0);
}

void	ft_order_radix(char **stack_a, char **stack_b)
{
	char	*tmp;
	int		index;

	index = 0;
	while (index < 7)
	{
		tmp = NULL;
		while (ft_strncmp(stack_a[0], tmp, ft_strlen(stack_a[0])))
		{
			if (!(ft_atoi(stack_a[0]) & (1 << index)))
				ft_pa(stack_a, stack_b);
			else
			{
				if (!tmp)
					tmp = stack_a[0];
				ft_rra(stack_a);
			}
		}
		if (!ft_return_b_stack(stack_a, stack_b))
			break ;
		index++;
	}
}

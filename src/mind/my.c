/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 12:40:23 by vide-sou          #+#    #+#             */
/*   Updated: 2024/11/24 12:46:14 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mind.h"

void	ft_order_my(char **stack_a, char **stack_b)
{
	int		index;
	char	*tmp;

	while (stack_a[0] && stack_a[0][0])
	{
		index = 0;
		tmp = NULL;
		while (stack_a[index] && stack_a[index][0])
		{
			if (!tmp || ft_atoi(tmp) > ft_atoi(stack_a[index]))
				tmp = stack_a[index];
			index++;
		}
		ft_go_to_number(stack_a, ft_atoi(tmp));
		ft_pb(stack_a, stack_b);
	}
	while (stack_b[0] && stack_b[0][0])
		ft_pa(stack_b, stack_a);
}

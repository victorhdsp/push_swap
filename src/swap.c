/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 19:02:55 by vide-sou          #+#    #+#             */
/*   Updated: 2024/11/28 08:38:58 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commands.h"

void	ft_sa(t_stack_map **stack, int print)
{
	ft_swap(stack, 0, 1, 0);
	if (print)
		ft_sucess_message("sa");
}

void	ft_sb(t_stack_map **stack, int print)
{
	ft_swap(stack, 0, 1, 0);
	if (print)
		ft_sucess_message("sb");
}

void	ft_ss(t_stack_map **stack_a, t_stack_map **stack_b, int print)
{
	ft_swap(stack_a, 0, 1, 0);
	ft_swap(stack_b, 0, 1, 0);
	if (print)
		ft_sucess_message("ss");
}

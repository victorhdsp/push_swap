/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_roll.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 19:02:55 by vide-sou          #+#    #+#             */
/*   Updated: 2024/11/28 08:37:08 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commands.h"

void	ft_rra(t_stack_map **stack, int print)
{
	ft_reverse_roll(stack, 0);
	if (print)
		ft_sucess_message("rra");
}

void	ft_rrb(t_stack_map **stack, int print)
{
	ft_reverse_roll(stack, 0);
	if (print)
		ft_sucess_message("rrb");
}

void	ft_rrr(t_stack_map **stack_a, t_stack_map **stack_b, int print)
{
	ft_reverse_roll(stack_a, 0);
	ft_reverse_roll(stack_b, 0);
	if (print)
		ft_sucess_message("rrr");
}

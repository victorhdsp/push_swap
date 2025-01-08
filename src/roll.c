/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   roll.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 19:02:55 by vide-sou          #+#    #+#             */
/*   Updated: 2025/01/08 08:25:15 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commands.h"

void	ft_ra(t_stack_map **stack)
{
	ft_roll(stack, 0);
	ft_sucess_message("ra");
}

void	ft_rb(t_stack_map **stack)
{
	ft_roll(stack, 0);
	ft_sucess_message("rb");
}

void	ft_rr(t_stack_map **stack_a, t_stack_map **stack_b)
{
	ft_roll(stack_a, 0);
	ft_roll(stack_b, 0);
	ft_sucess_message("rr");
}

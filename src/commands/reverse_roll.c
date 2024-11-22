/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_roll.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 19:02:55 by vide-sou          #+#    #+#             */
/*   Updated: 2024/11/22 09:56:32 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commands.h"

void	ft_rra(char **stack)
{
	ft_reverse_roll(stack, 0);
	ft_sucess_message("rra");
}

void	ft_rrb(char **stack)
{
	ft_reverse_roll(stack, 0);
	ft_sucess_message("rrb");
}

void	ft_rrr(char **stack_a, char **stack_b)
{
	ft_reverse_roll(stack_a, 0);
	ft_reverse_roll(stack_b, 0);
	ft_sucess_message("rrr");
}

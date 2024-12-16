/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 19:02:55 by vide-sou          #+#    #+#             */
/*   Updated: 2024/11/28 08:35:54 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commands.h"

void	ft_pa(t_stack_map **stack_b, t_stack_map **stack_a, int print)
{
	ft_push(stack_b, stack_a);
	if (print)
		ft_sucess_message("pa");
}

void	ft_pb(t_stack_map **stack_a, t_stack_map **stack_b, int print)
{
	ft_push(stack_a, stack_b);
	if (print)
		ft_sucess_message("pb");
}

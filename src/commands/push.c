/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 19:02:55 by vide-sou          #+#    #+#             */
/*   Updated: 2024/11/22 11:43:46 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commands.h"

void	ft_pa(char **stack_b, char **stack_a)
{
	ft_push(stack_b, stack_a);
	ft_sucess_message("pa");
}

void	ft_pb(char **stack_a, char **stack_b)
{
	ft_push(stack_a, stack_b);
	ft_sucess_message("pb");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generic_commands.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:21:48 by vide-sou          #+#    #+#             */
/*   Updated: 2024/11/26 18:49:04 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commands.h"

int	ft_swap(t_stack_map **stack, size_t id_1, size_t id_2, int nulable)
{
	t_stack_map	*tmp;

	if (!stack[id_1] || !stack[id_2])
		return (0);
	if (!nulable && (!stack[id_1]->string || !stack[id_2]->string))
		return (0);
	tmp = stack[id_1];
	stack[id_1] = stack[id_2];
	stack[id_2] = tmp;
	return (1);
}

int	ft_roll(t_stack_map **stack, int nulable)
{
	size_t	index;

	index = 0;
	if (!stack[index] || !stack[index + 1])
		return (0);
	while (stack[index + 1])
	{
		ft_swap(stack, index, index + 1, nulable);
		index++;
	}
	return (1);
}

int	ft_reverse_roll(t_stack_map **stack, int nulable)
{
	size_t	index;

	index = 0;
	if (!stack[index] || !stack[index + 1])
		return (0);
	while (stack[index + 1] && stack[index])
		index++;
	while (index > 0)
	{
		ft_swap(stack, index, index - 1, nulable);
		index--;
	}
	return (1);
}

int	ft_push(t_stack_map **stack_1, t_stack_map **stack_2)
{
	t_stack_map	*tmp;

	if (!stack_1[0] || !stack_1[0]->string)
		return (0);
	ft_reverse_roll(stack_2, 1);
	tmp = stack_2[0];
	stack_2[0] = stack_1[0];
	stack_1[0] = tmp;
	ft_roll(stack_1, 1);
	return (1);
}

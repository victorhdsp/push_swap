/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generic.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:21:48 by vide-sou          #+#    #+#             */
/*   Updated: 2024/11/22 09:57:35 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commands.h"

void	ft_swap(char **stack, size_t id_1, size_t id_2, int nulable)
{
	char	*tmp;

	if (!stack[id_1] || !stack[id_2])
		return ;
	if (!nulable && (!stack[id_1][0] || !stack[id_2][0]))
		return ;
	tmp = stack[id_1];
	stack[id_1] = stack[id_2];
	stack[id_2] = tmp;
}

void	ft_roll(char **stack, int nulable)
{
	size_t	index;

	index = 0;
	while (stack[index + 1] && stack[index])
		index++;
	while (index > 0)
	{
		ft_swap(stack, index, index - 1, nulable);
		index--;
	}
}

void	ft_reverse_roll(char **stack, int nulable)
{
	size_t	index;

	index = 0;
	while (stack[index + 1])
	{
		ft_swap(stack, index, index + 1, nulable);
		index++;
	}
}

void	ft_push(char **stack_1, char **stack_2)
{
	char	*tmp;

	if (!stack_1[0] || !stack_1[0][0])
		return ;
	ft_roll(stack_2, 1);
	tmp = stack_2[0];
	stack_2[0] = stack_1[0];
	stack_1[0] = tmp;
	ft_reverse_roll(stack_1, 1);
}

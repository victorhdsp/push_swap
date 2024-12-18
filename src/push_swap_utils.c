/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 08:52:23 by vide-sou          #+#    #+#             */
/*   Updated: 2024/12/18 08:56:40 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_clear_stack(t_stack_map **stack)
{
	size_t	index;

	index = 0;
	while (stack[index])
	{
		if (stack[index]->string)
			free(stack[index]->string);
		free(stack[index]);
		index++;
	}
	free(stack);
	return (NULL);
}

size_t	ft_get_stack_size(t_stack_map **stack)
{
	size_t	index;

	index = 0;
	while (stack[index] && stack[index]->string)
		index++;
	return (index);
}

int	ft_get_min_number_in_stack(t_stack_map **stack, int min)
{
	int	index;
	int	value;

	index = 0;
	value = MAX_NUMBER;
	while (stack[index])
	{
		if (stack[index]->integer < value && stack[index]->integer > min
			&& stack[index]->string)
			value = stack[index]->integer;
		index++;
	}
	return (value);
}

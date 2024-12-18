/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_manager.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:37:49 by vide-sou          #+#    #+#             */
/*   Updated: 2024/12/18 08:52:34 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_map	*create_stack_item(char *str)
{
	t_stack_map	*result;

	result = ft_calloc(sizeof(t_stack_map), 1);
	if (str && str[0])
	{
		result->string = ft_strdup(str);
		result->integer = ft_atol(str);
	}
	result->index = -1;
	return (result);
}

t_stack_map	**create_stack_list(int size, char **input)
{
	int			index;
	t_stack_map	**result;

	index = 0;
	result = ft_calloc(sizeof(t_stack_map), size + 1);
	while (index < size)
	{
		if (input && input[index])
			result[index] = create_stack_item(input[index]);
		else
			result[index] = create_stack_item(NULL);
		index++;
	}
	return (result);
}

void	enumerate_stack_list(t_stack_map **stack)
{
	int	position;
	int	index;
	int	min;

	index = 0;
	position = 0;
	min = ft_get_min_number_in_stack(stack, MIN_NUMBER);
	while (stack[index])
	{
		if (stack[position]->integer == min)
		{
			stack[position]->index = index;
			min = ft_get_min_number_in_stack(stack, stack[position]->integer);
			index++;
		}
		position++;
		if (stack[position] == NULL)
			position = 0;
	}
}

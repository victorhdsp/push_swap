/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 08:52:23 by vide-sou          #+#    #+#             */
/*   Updated: 2024/12/16 09:32:05 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_join_with_space(char const *s1, char const *s2)
{
	char	*result;
	char	*tmp;

	if (s1 && s2 && s1[0] && s2[0])
	{
		tmp = ft_strjoin(s1, " ");
		result = ft_strjoin(tmp, s2);
		free(tmp);
	}
	else
		result = ft_strjoin(s1, s2);
	return (result);
}

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

size_t	ft_get_stack_size(char **stack)
{
	size_t	index;

	index = 0;
	while ((char **)stack[index])
		index++;
	return (index);
}

int	ft_min_number_in_stack(t_stack_map **stack, int min)
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

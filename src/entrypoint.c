/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entrypoint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:21:48 by vide-sou          #+#    #+#             */
/*   Updated: 2024/11/24 13:05:15 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	*join_all_stdin(int argc, char **argv)
{
	int		index;
	char	*tmp;
	char	*result;

	index = 2;
	result = ft_strjoin(argv[1], NULL);
	tmp = NULL;
	while (index <= argc)
	{
		tmp = result;
		result = ft_strjoin(tmp, " ");
		free(tmp);
		tmp = result;
		result = ft_strjoin(tmp, argv[index]);
		free(tmp);
		index++;
	}
	return (result);
}

int	has_permited_numbers(char **numbers)
{
	int		ex_index;
	int		in_index;

	ex_index = 0;
	while (numbers[ex_index])
	{
		in_index = ex_index + 1;
		if (ft_atol(numbers[ex_index]) < MIN_NUMBER || ft_atol(numbers[ex_index]) > MAX_NUMBER)
			return (1);
		while (numbers[in_index])
		{
			if (ft_atoi(numbers[ex_index]) == ft_atoi(numbers[in_index]))
				return (1);
			in_index++;
		}
		ex_index++;
	}
	return (0);
}

char	**ft_entrypoint(int argc, char **argv)
{
	char	*str;
	size_t	index;
	char	**stack;

	index = 0;
	str = join_all_stdin(argc, argv);
	while (str[index])
	{
		if (!ft_isdigit(str[index]) && str[index] != ' ')
			ft_error_message();
		index++;
	}
	stack = ft_split(str, ' ');
	if (!stack[0] || has_permited_numbers(stack))
	{
		ft_error_message();
		ft_clear_stack(stack);
	}
	free(str);
	return (stack);
}

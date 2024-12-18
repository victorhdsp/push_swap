/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_normalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 08:52:23 by vide-sou          #+#    #+#             */
/*   Updated: 2024/12/18 09:53:16 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_not_all_number(char *str)
{
	if (str[0] == '-' || str[0] == '+')
		str++;
	while (str && *str)
	{
		if (!ft_isdigit(*str))
			return (1);
		str++;
	}
	return (0);
}

static char	*join_all_input(int argv, char **argc)
{
	int		index;
	char	*result;
	char	*tmp;

	index = 1;
	result = ft_strdup(argc[index]);
	while (index + 1 < argv)
	{
		tmp = result;
		result = ft_join_with_space(tmp, argc[index + 1]);
		if (tmp)
			free(tmp);
		index++;
	}
	return (result);
}

static int	has_forbidden_input(char **input)
{
	int	ex_index;
	int	in_index;

	ex_index = 0;
	while (input[ex_index])
	{
		in_index = ex_index + 1;
		if (is_not_all_number(input[ex_index]))
			return (1);
		if (ft_atol(input[ex_index]) < MIN_NUMBER
			|| ft_atol(input[ex_index]) > MAX_NUMBER)
			return (1);
		while (input[in_index])
		{
			if (ft_atol(input[ex_index]) == ft_atol(input[in_index]))
				return (1);
			in_index++;
		}
		ex_index++;
	}
	return (0);
}

void	*ft_clear_input(char **input)
{
	size_t	index;

	index = 0;
	while (input[index])
	{
		free(input[index]);
		index++;
	}
	free(input);
	return (NULL);
}

char	**input_normalizer(int argv, char **argc)
{
	char	*str;
	char	**input;

	if (argv < 2)
		ft_error_message();
	str = join_all_input(argv, argc);
	input = ft_split(str, ' ');
	free(str);
	if (has_forbidden_input(input))
	{
		ft_clear_input(input);
		ft_error_message();
	}
	return (input);
}

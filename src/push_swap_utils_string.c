/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_string.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 08:52:23 by vide-sou          #+#    #+#             */
/*   Updated: 2024/12/18 09:01:09 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_join_with_space(char *s1, char *s2)
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

size_t	ft_get_numbers_size(char **stack)
{
	size_t	index;

	index = 0;
	while (stack[index])
		index++;
	return (index);
}

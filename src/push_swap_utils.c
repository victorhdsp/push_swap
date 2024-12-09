/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:21:48 by vide-sou          #+#    #+#             */
/*   Updated: 2024/11/24 13:13:11 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_clear_stack(char **stack)
{
	size_t	index;

	index = 0;
	while (stack[index])
	{
		free(stack[index]);
		index++;
	}
	free(stack);
	return (NULL);
}

void	ft_print_stack(char **stack, char *name)
{
	size_t	index;

	index = 0;
	ft_printf("-----------\n");
	ft_printf("| %7.7s |\n", name);
	ft_printf("-----------\n");
	while (stack[index])
	{
		ft_printf("| %7s |\n", stack[index]);
		index++;
	}
	ft_printf("-----------\n");
}

char	**ft_create_stack_a(char **base_stack)
{
	
}

char	**ft_create_stack_b(char **base_stack)
{
	size_t	len;
	char	**result;

	len = 0;
	while (base_stack[len])
		len++;
	result = ft_calloc(len + 1, sizeof(char *));
	if (!result)
		return (NULL);
	while (len--)
		result[len] = ft_strdup("");
	return (result);
}

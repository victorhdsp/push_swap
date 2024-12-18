/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 09:35:06 by vide-sou          #+#    #+#             */
/*   Updated: 2024/12/18 09:03:24 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/push_swap.h"

int	main(int argv, char **argc)
{
	char		**input;
	size_t		size;
	t_stack_map	**stack_a;
	t_stack_map	**stack_b;

	input = input_normalizer(argv, argc);
	size = ft_get_numbers_size(input);
	stack_a = create_stack_list(size, input);
	stack_b = create_stack_list(size, NULL);
	enumerate_stack_list(stack_a);
	if (size <= 3)
		ft_min_three_movs(stack_a, 0);
	else if (size <= 5)
		ft_min_five_movs(stack_a, stack_b);
	else
		ft_radix(stack_a, stack_b);
	ft_clear_stack(stack_a);
	ft_clear_stack(stack_b);
	ft_clear_input(input);
}

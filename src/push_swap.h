/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:29:56 by vide-sou          #+#    #+#             */
/*   Updated: 2024/12/18 09:01:15 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "printf/ft_printf.h"

typedef struct s_stack_map
{
	char	*string;
	int		integer;
	int		index;
}			t_stack_map;

# define MIN_NUMBER -2147483648
# define MAX_NUMBER 2147483647

void		ft_print_stack_value(t_stack_map **stack, char *name);
void		ft_print_stack_index(t_stack_map **stack, char *name);

char		*ft_join_with_space(char *s1, char *s2);
size_t		ft_get_numbers_size(char **stack);

void		*ft_clear_stack(t_stack_map **stack);
size_t		ft_get_stack_size(t_stack_map **stack);
int			ft_get_min_number_in_stack(t_stack_map **stack, int min);

char		**input_normalizer(int argv, char **argc);
void		*ft_clear_input(char **input);

void		ft_error_message(void);
void		ft_sucess_message(char *str);

t_stack_map	**create_stack_list(int size, char **input);
t_stack_map	*create_stack_item(char *str);
void		enumerate_stack_list(t_stack_map **stack);

void		ft_min_three_movs(t_stack_map **stack, int start);
void		ft_min_five_movs(t_stack_map **stack_a, t_stack_map **stack_b);
void		ft_radix(t_stack_map **stack_a, t_stack_map **stack_b);

#endif
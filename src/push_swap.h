/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:29:56 by vide-sou          #+#    #+#             */
/*   Updated: 2024/11/26 20:03:40 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "algorithm.h"
# include "libft/libft.h"
# include "printf/ft_printf.h"

# define MIN_NUMBER -2147483648
# define MAX_NUMBER 2147483647

void		ft_print_stack_value(t_stack_map **stack, char *name);
void		ft_print_stack_index(t_stack_map **stack, char *name);

char		*ft_join_with_space(char const *s1, char const *s2);
void		*ft_clear_stack(t_stack_map **stack);
size_t		ft_get_stack_size(char **stack);
int			ft_get_min_number_in_stack(t_stack_map **stack, int min);

char		**input_normalizer(int argv, char **argc);
void		*ft_clear_input(char **input);

void		ft_error_message(void);
void		ft_sucess_message(char *str);

t_stack_map	**create_stack_list(int size, char **input);
t_stack_map	*create_stack_item(char *str);
void		enumerate_stack_list(t_stack_map **stack);

void		ft_command(char *command);

#endif
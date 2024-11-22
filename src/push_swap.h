/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:21:53 by vide-sou          #+#    #+#             */
/*   Updated: 2024/11/21 11:55:59 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "../printf/ft_printf.h"
# include "./commands/commands.h"
# include <stdlib.h>
# include <unistd.h>

int		push_swap(int argv, char **argc);
char	**ft_entrypoint(int argc, char **argv);
void	*ft_clear_stack(char **stack);
void	ft_error_message(void);
void	ft_sucess_message(char *str);
void	ft_print_stack(char **stack, char *name);
char	**ft_create_stack_b(char **stack_a);
void	ft_order_radix(char **stack_a, char **stack_b);
#endif
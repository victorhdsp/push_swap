/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:21:53 by vide-sou          #+#    #+#             */
/*   Updated: 2024/11/24 12:19:59 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "../printf/ft_printf.h"
# include "./commands/commands.h"
# include "./mind/mind.h"
# include <stdlib.h>
# include <unistd.h>

#define MIN_NUMBER -2147483648
#define MAX_NUMBER 2147483647

int		push_swap(int argv, char **argc);
char	**ft_entrypoint(int argc, char **argv);
void	*ft_clear_stack(char **stack);
void	ft_error_message(void);
void	ft_sucess_message(char *str);
void	ft_print_stack(char **stack, char *name);
char	**ft_create_stack_b(char **stack_a);
#endif
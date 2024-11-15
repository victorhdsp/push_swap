/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:21:53 by vide-sou          #+#    #+#             */
/*   Updated: 2024/11/15 18:34:07 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../libft/libft.h"
#include "../printf/ft_printf.h"
#include <unistd.h>
#include <stdlib.h>

int     push_swap(int argv, char **argc);
char    **ft_entrypoint(int argc, char **argv);
void    *ft_clear_stack(char **stack);
void    ft_error();
void    ft_print_stack(char **stack, char *name);

#endif
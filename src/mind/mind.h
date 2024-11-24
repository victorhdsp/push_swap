/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mind.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:21:53 by vide-sou          #+#    #+#             */
/*   Updated: 2024/11/24 13:12:05 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MIND_H
# define MIND_H

# include "../push_swap.h"

typedef struct s_sort_map {
    char    *string;
    int     integer;
    int     index;
} t_sort_map;

/* Mind */
void    ft_go_to_number(char **stack_a, int target);
int		ft_get_stack_size(char **stack);
int     ft_check_if_stack_a_is_sorted(char **stack_a);
void    ft_select_sort(char **stack_a, char **stack_b);

/* Sorts */
void	ft_order_my(char **stack_a, char **stack_b);
void	ft_order_radix(char **stack_a, char **stack_b);
#endif
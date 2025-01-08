/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:21:53 by vide-sou          #+#    #+#             */
/*   Updated: 2025/01/08 08:24:56 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMANDS_H
# define COMMANDS_H

# include "push_swap.h"

/* Generic */
int			ft_swap(t_stack_map **stack, size_t id_1, size_t id_2, int nulable);
int			ft_roll(t_stack_map **stack, int nulable);
int			ft_reverse_roll(t_stack_map **stack, int nulable);
int			ft_push(t_stack_map **stack_1, t_stack_map **stack_2);
/* Roll */
void		ft_ra(t_stack_map **stack);
void		ft_rb(t_stack_map **stack);
void		ft_rr(t_stack_map **stack_a, t_stack_map **stack_b);
/* Reverse roll */
void		ft_rra(t_stack_map **stack);
void		ft_rrb(t_stack_map **stack);
void		ft_rrr(t_stack_map **stack_a, t_stack_map **stack_b);
/* Swap */
void		ft_sa(t_stack_map **stack);
void		ft_sb(t_stack_map **stack);
void		ft_ss(t_stack_map **stack_a, t_stack_map **stack_b);
/* Stack */
void		ft_pa(t_stack_map **stack_a, t_stack_map **stack_b);
void		ft_pb(t_stack_map **stack_b, t_stack_map **stack_a);
#endif
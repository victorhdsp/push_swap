/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:21:53 by vide-sou          #+#    #+#             */
/*   Updated: 2024/11/21 12:59:40 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMANDS_H
# define COMMANDS_H

# include "../push_swap.h"

/* Generic */
void	ft_swap(char **stack, size_t id_1, size_t id_2, int nulable);
void	ft_roll(char **stack, int nulable);
void	ft_reverse_roll(char **stack, int nulable);
void	ft_push(char **stack_1, char **stack_2);
/* Roll */
void	ft_ra(char **stack);
void	ft_rb(char **stack);
void	ft_rr(char **stack_a, char **stack_b);
/* Reverse roll */
void	ft_rra(char **stack);
void	ft_rrb(char **stack);
void	ft_rrr(char **stack_a, char **stack_b);
/* Swap */
void	ft_sa(char **stack);
void	ft_sb(char **stack);
void	ft_ss(char **stack_a, char **stack_b);
/* Stack */
void	ft_pa(char **stack_a, char **stack_b);
void	ft_pb(char **stack_b, char **stack_a);
#endif
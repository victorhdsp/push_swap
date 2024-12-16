/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:21:53 by vide-sou          #+#    #+#             */
/*   Updated: 2024/12/14 16:08:53 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGORITHM_H
# define ALGORITHM_H

# include "commands.h"
# include "push_swap.h"

void	ft_radix(t_stack_map **stack_a, t_stack_map **stack_b);
void	ft_min_three_movs(t_stack_map **stack, int start);
void	ft_min_five_movs(t_stack_map **stack_a, t_stack_map **stack_b);

#endif
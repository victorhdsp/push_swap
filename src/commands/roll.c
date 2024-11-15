/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   roll.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 19:02:55 by vide-sou          #+#    #+#             */
/*   Updated: 2024/11/15 19:54:31 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commands.h"

void    ft_ra(char **stack)
{
    ft_roll(stack);
    ft_sucess_message("ra");
}

void    ft_rb(char **stack)
{
    ft_roll(stack);
    ft_sucess_message("rb");
}

void    ft_rr(char **stack_a, char **stack_b)
{
    ft_roll(stack_a);
    ft_roll(stack_b);
    ft_sucess_message("rr");
}
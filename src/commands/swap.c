/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 19:02:55 by vide-sou          #+#    #+#             */
/*   Updated: 2024/11/15 19:55:50 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commands.h"

void    ft_sa(char **stack)
{
    ft_swap(stack, 0 ,1);
    ft_sucess_message("sa");
}

void    ft_sb(char **stack)
{
    ft_swap(stack, 0, 1);
    ft_sucess_message("sb");
}

void    ft_ss(char **stack_a, char **stack_b)
{
    ft_swap(stack_a, 0, 1);
    ft_swap(stack_b, 0, 1);
    ft_sucess_message("ss");
}
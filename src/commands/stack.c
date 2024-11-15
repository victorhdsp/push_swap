/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 19:02:55 by vide-sou          #+#    #+#             */
/*   Updated: 2024/11/15 20:02:26 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commands.h"

void    ft_pa(char **stack_a, char **stack_b)
{
    ft_stack(stack_a, stack_b);
    ft_sucess_message("pa");
}

void    ft_pa(char **stack_b, char **stack_a)
{
    ft_stack(stack_a, stack_b);
    ft_sucess_message("pb");
}

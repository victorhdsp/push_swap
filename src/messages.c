/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   messages.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 19:02:20 by vide-sou          #+#    #+#             */
/*   Updated: 2024/11/15 19:16:01 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error_message(void)
{
	write(1, "Error\n", 6);
	exit(-1);
}

void	ft_sucess_message(char *str)
{
	write(1, str, ft_strlen(str));
	write(1, "\n", 1);
}

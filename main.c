/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:21:51 by vide-sou          #+#    #+#             */
/*   Updated: 2024/11/22 11:58:09 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/push_swap.h"

int main(int argv, char **argc)
{
    if (argv < 2)
        ft_error_message();
    return (push_swap(argv, argc));
}

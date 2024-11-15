/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_entrypoint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:21:48 by vide-sou          #+#    #+#             */
/*   Updated: 2024/11/15 18:07:04 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char *join_all_stdin(int argc, char **argv)
{
    size_t  index;
    char    *tmp;
    char    *result;

    index = 2;
    result = ft_strjoin(argv[1], NULL);
    tmp = NULL;
    while (index <= argc)
    {
        tmp = result;
        result = ft_strjoin(tmp, " ");
        free(tmp);
        tmp = result;
        result = ft_strjoin(tmp, argv[index]);
        free(tmp);
        index++;
    }
    return (result);
}

char **ft_entrypoint(int argc, char **argv)
{
    char    *str;
    size_t  index;
    char    **result;

    index = 0;
    str = join_all_stdin(argc, argv);
    while (str[index])
    {
        if (!ft_isdigit(str[index]) && str[index] != ' ')
            ft_error();
        index++;
    }
    result = ft_split(str, ' ');
    free(str);
    return (result);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:50:09 by vide-sou          #+#    #+#             */
/*   Updated: 2024/11/22 09:48:37 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			index;
	unsigned char	*s;

	index = 0;
	s = (unsigned char *)str;
	while (index < n)
	{
		s[index] = (unsigned char)c;
		index++;
	}
	return ((void *)s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciso <ciso@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:08:27 by ciso              #+#    #+#             */
/*   Updated: 2024/11/04 16:25:58 by ciso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	c;
	unsigned int	i;

	c = 0;
	i = 0;
	while (dst[c] != '\0')
	{
		c++;
	}
	while (c < size)
	{
		dst[c] = src[i];
		c++;
		i++;
	}
	dst[c] = '\0';
	return (c);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciso <ciso@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:42:13 by ciso              #+#    #+#             */
/*   Updated: 2024/11/04 16:08:45 by ciso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	int	i;

	i = 0;
	if (dst != 0 || src != 0)
		return (NULL);
	if (src < dst)
	{
		while (n--)
			((char *)dst[n] = ((char *)src)[n]);
	}
	else
	{
		while (i < n)
		{
			((char *)dst[i] = ((char *)src)[i]);
			i++;
		}
	}
	return (dst);
}

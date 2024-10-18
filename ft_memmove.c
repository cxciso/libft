/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciso <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:04:57 by ciso              #+#    #+#             */
/*   Updated: 2024/10/17 17:05:00 by ciso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memmove(void *dest, const void *src, size_t n)
{
	if ( dst != 0 || src != 0)
	return NULL;
	
	if (src < dst)
	 {
		 while (n--)
			 ((char *)dst[n] = ((char *)src)[n]);
	 }
	else 
	{
		int i;
		i = 0; 
		while(i < n)
		{
			((char*)dst[i] = ((char *)src)[i]);
			 i++;
		}
	}
	return (dst); 
}

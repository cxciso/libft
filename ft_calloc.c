/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciso <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:38:52 by ciso              #+#    #+#             */
/*   Updated: 2024/10/22 14:59:06 by ciso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_calloc(size_t count, size_t size)
{
	size_t total;
	
	total = count * size;
	
	void *ptr = malloc(total);
	if (ptr == NULL)
	{
		return NULL;
	}
	ft_bzero(ptr, total);
	return ptr; 

}

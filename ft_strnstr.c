/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciso <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:45:30 by ciso              #+#    #+#             */
/*   Updated: 2024/10/22 13:58:03 by ciso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	
	i = 0;
	j = 0;
	
	if (*needle = '\0')
	{
		return(char *)haystack;
	}

	while( i < len && haystak[i] != '\0') 
	{
		while(hazstack[i+j] == needle[i] && (i + j) < len)
		{
			j++;
			if(needle[j] == '\0')
			{
				return(char *)&haystack[i];
			}
		}
		i++;
	}
	return NULL; 
}


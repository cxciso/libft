/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciso <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:43:51 by ciso              #+#    #+#             */
/*   Updated: 2024/10/18 15:53:53 by ciso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strrchr(const char *str, int c);
{
	int i;
	char  *lst;
	
	i = 0;
	lst = NULL;
	   while(str[i] != '\0')
	   {
		   if(str[i] == (char)c)
			   lst =(char*)str[i];
		   i++;
	   }
	if (c == '\0')
		return((char*)str[i]);
	return(lst);

}

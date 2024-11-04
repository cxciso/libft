/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciso <ciso@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:43:51 by ciso              #+#    #+#             */
/*   Updated: 2024/11/04 16:35:55 by ciso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*lst;

	i = 0;
	lst = NULL;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			lst = (char *)&str[i];
		i++;
	}
	if (c == '\0')
		return ((char *)&str[i]);
	return (lst);
}

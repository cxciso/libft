/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciso <ciso@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:10:26 by ciso              #+#    #+#             */
/*   Updated: 2024/11/04 17:11:27 by ciso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dest;
	unsigned int	len;

	len = ft_strlen(s);
	dest = (char *)malloc(len * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (s[i++])
		dest[i] = (*f)(i, s[i]);
	dest[i] = 0;
	return (dest);
}

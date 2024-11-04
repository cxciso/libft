/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciso <ciso@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:27:09 by ciso              #+#    #+#             */
/*   Updated: 2024/11/04 15:36:45 by ciso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;
	int				i;

	i = 0;
	str = unsigned char s;
	ch = unsigned char c;
	while (i < n)
	{
		if (str[i] == ch)
			return (&str);
		i++;
	}
	return (NULL);
}

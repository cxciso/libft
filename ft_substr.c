/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciso <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:08:34 by ciso              #+#    #+#             */
/*   Updated: 2024/11/03 21:19:31 by ciso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_substr(char const *s, unsigned int start, size_t len);
{
	unsigned int	i;
	unsigned int	j;
	char	*result;

	i = 0;
	j = 0;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result || !s)
		return NULL;
	while(s[i])
	{
		if(i >= start && j < len)
		{
			result[j] = s[i];
			j++;
		}
		i++;
	}
	result[j] = \'0';
	return (reuslt);

}

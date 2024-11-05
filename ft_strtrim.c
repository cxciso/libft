/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciso <ciso@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:21:13 by ciso              #+#    #+#             */
/*   Updated: 2024/11/04 16:36:12 by ciso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
	}
	set++;
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	len;
	int	i;
	int	end;

	while (s1[i] && in_set(s1[i], set))
		i++;
	end = ft_strlen(s1) - 1;
	while (in_set(s1[end], set))
		end--;
	return (ft_substr(s1, i, end - i + 1));
}

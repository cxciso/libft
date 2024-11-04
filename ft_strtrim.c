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

static void	get_trimmed_range(char const *s1, char const *set, char **start,
		char **end)
{
	*start = (char *)s1;
	*end = (char *)s1 + ft_strlen(s1) - 1;
	while (**start && in_set(**start, set))
		(*start)++;
	while (*end > *start && in_set(**end, set))
		(*end)--;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	size_t	len;
	size_t	i;
	char	*result;

	start = NULL;
	end = NULL;
	get_trimmed_range(s1, set, &start, &end);
	len = end - start + 1;
	i = 0;
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	if (!s1 || !set)
		return (NULL);
	while (i < len)
	{
		result[i] = start[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciso <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:20:01 by ciso              #+#    #+#             */
/*   Updated: 2024/11/03 16:52:24 by ciso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int 	count_w(char const *s, char c)
{
	int count;
	count = 1;

	while(*s)
		if (*s == c && *s != NULL)
			count++;

	return count; 
}
char **ft_split(char const *s, char c)
{
	char	**tab;
	int			i;
	int			j;


	i = 0;
	j = 0;
	while (*s)
	{
		if (*s == c)
		{
			s++;
			tab[i][j] = '\0';
			i++;
		}
		tab[i][j++] = *s;
		s++;
	}
	tab[i][j] = NULL;
}

	"jour non", 'n'
	[ [bo\0], [jour ], [o], [NULL] ]
	*s = s[0]
[ [], [] ];

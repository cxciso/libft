/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciso <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:02:31 by ciso              #+#    #+#             */
/*   Updated: 2024/10/17 17:03:00 by ciso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	 ft_strlen(char *str)
{
	int	i;
	i = 0;
	
	while(str[i])
		i++;
	return (i);
}

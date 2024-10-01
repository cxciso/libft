/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciso <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:42:34 by ciso              #+#    #+#             */
/*   Updated: 2024/10/01 17:08:03 by ciso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_isalpha(int a)
{
 	if ((a >= 'a'  && a <= 'z') || (a >= 'A' && a <= 'Z'))
		return(1);
 	else
	 	return(0); 
}

int main(int argc,char *argv[])
{
	int i = 1;

	while (argv[i])
	{
 		printf("RESULT : %d\n", ft_isalpha(atoi(argv[i])));
		i++;
	}
	return (0);
}

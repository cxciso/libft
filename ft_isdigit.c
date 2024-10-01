/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciso <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:03:30 by ciso              #+#    #+#             */
/*   Updated: 2024/10/01 18:16:40 by ciso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_isdigit(int a)
{
 	if (a >= '0'  && a <= '9')
		return(1);
 	else
	 	return(0); 
}

int main(int argc,char *argv[])
{
	int i = 1;

	while (argv[i])
	{
 		printf("RESULT : %d\n", ft_isdigit(atoi(argv[i])));
		i++;
	}
	return (0);
}

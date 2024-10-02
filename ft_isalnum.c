/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciso <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:25:18 by ciso              #+#    #+#             */
/*   Updated: 2024/10/02 16:41:32 by ciso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_isalnum(int a)
{
    if ((a >= 'a'  && a <= 'z') || (a >= 'A' && a <= 'Z')) || (a >= '0' && a <= '9')
        return(1);
    else
        return(0);
}

int main(int argc,char *argv[])
{
    int i = 1;

    while (argv[i])
    {
        printf("RESULT : %d\n", ft_isalnum(atoi(argv[i])));
        i++;
    }
    return (0);
}

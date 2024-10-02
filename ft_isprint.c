/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciso <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:20:43 by ciso              #+#    #+#             */
/*   Updated: 2024/10/02 17:23:39 by ciso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int ft_isprint(int a)
{
    if (a >= 32  && a <= 127)
        return(1);
    else
        return(0);
}

int main(int argc,char *argv[])
{
    int i = 1;

    while (argv[i])
    {
        printf("RESULT : %d\n", ft_isprint(atoi(argv[i])));
        i++;
    }
    return (0);
}

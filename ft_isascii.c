/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciso <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:39:11 by ciso              #+#    #+#             */
/*   Updated: 2024/10/02 16:41:00 by ciso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_isascii(int a)
{
    if (a >= 0  && a <= 127)
        return(1);
    else
        return(0);
}

int main(int argc,char *argv[])
{
    int i = 1;

    while (argv[i])
    {
        printf("RESULT : %d\n", ft_isascii(atoi(argv[i])));
        i++;
    }
    return (0);
}

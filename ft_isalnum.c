/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciso <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:56:18 by ciso              #+#    #+#             */
/*   Updated: 2024/10/17 16:56:51 by ciso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_isalnum(int a)
{
    if (ft_isacii(a) || ft_isdigit(a))
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

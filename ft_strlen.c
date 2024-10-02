/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonte-e <smonte-e@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:25:52 by ciso              #+#    #+#             */
/*   Updated: 2024/10/02 22:20:10 by smonte-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdlib.h>

int	 ft_strlen(char *str)
{
	int	i;
	i = 0;
	
	while(str[i])
		i++;
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciso <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:55:12 by ciso              #+#    #+#             */
/*   Updated: 2024/10/17 16:55:16 by ciso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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

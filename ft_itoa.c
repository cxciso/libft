/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciso <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:29:42 by ciso              #+#    #+#             */
/*   Updated: 2024/10/29 16:02:07 by ciso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	 count(int n)
{
	int i;

	i = 0;
	
	if (n == 0)
		return(1);
	if (n < 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++; 
	}
	return(i); 
}
char		*ft_itoa(int num)
{
	int size; 
	char *str; 
	int neg; 

	size = count(num);
	str = (char *)malloc(size + 1); 
	neg = 0; 
	if (!str)
		return NULL;
	str[size] = '\0';
	if (num < 0)
	{
		neg = 1;
		num = -num;
	}
	while (size > 0)
	{
		str[size - 1] = (num % 10) + '0';
		num = num / 10;
		size--;
	}
	if (neg)
	{
		str[0] ='-';
	}
	
	return str; 
} 


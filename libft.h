#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int ft_isalnum(int a);
int	ft_isalpha(int a);
int ft_isascii(int a);
int	ft_isdigit(int a);
int ft_isprint(int a);
int	 ft_strlen(char *str);
void *ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
int ft_toupper(int c);
int ft_tolower(int c)

#endif
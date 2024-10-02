#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	int		i;
	char	*buff;

	i = 0;
	buff = b;

	while (i < len)
	{
		buff[i] = c;
		i++;
	}
	return (buff);
}


#include "libft.h"

void *memmove(void *dest, const void *src, size_t n)
{
	if ( dst != 0 || src != 0)
	return NULL;
	
	if (src < dst)
	 {
		 while (n--)
			 ((char *)dst[n] = ((char *)src)[n]);
	 }
	else 
	{
		int i;
		i = 0; 
		while(i < n)
		{
			((char*)dst[i] = ((char *)src)[i]);
			 i++;
		}
	}
	return (dst); 
}

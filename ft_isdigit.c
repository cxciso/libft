
#include "libft.h" 

int	ft_isdigit(int a)
{
 	if (a >= '0'  && a <= '9')
		return(1);
 	else
	 	return(0); 
}

int main(int argc,char *argv[])
{
	int i = 1;

	while (argv[i])
	{
 		printf("RESULT : %d\n", ft_isdigit(atoi(argv[i])));
		i++;
	}
	return (0);
}

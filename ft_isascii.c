
#include "libft.h"

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

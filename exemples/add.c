#include "libft.h"

void add(int* a, int *b)
{
	*a *= *b;
	printf("a dans add = %d\n", *a);
}

int main(void)
{
	int a = 5;
	int b = 10;

	printf("a = %d\n", a);
	add(&a, &b);
	printf("a = %d\n", a);
}
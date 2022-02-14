#include "../includes/ft_printf.h"
#include <stdio.h>

int main()
{
	int *p;
	printf("String-> $%s$ | Integer-> $%d$ | Char-> $%c$\n", "hello world", 32 + 10, 'c');
	//ft_printf("String-> $%s$ | Integer-> $%d$ | Char-> $%c$\n", "hello world", 32 + 10, 'c');
	printf("D--> %d || I--> %i\n", -123, -233);

	printf("%p\n", p);
	printf("%llu\n", p);
	size_t a = (size_t )p;
	printf("%#lx\n", a);
	return (0);
}

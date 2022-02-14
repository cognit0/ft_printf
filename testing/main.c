#include "../includes/ft_printf.h"
#include <stdio.h>
#include <limits.h>
int main()
{
	int *p;

	// ft_printf("%p\n", p);
	// ft_printf("%x\n", p);

	//ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	
	//printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);

	printf("%c%%%s\n", 'A', "42");
	ft_printf("%c%%%s\n", 'A', "42");

	// ft_printf("%%%c%%%%% \n", 'c');
	// printf("%%%c%%%%% \n", 'c');
	// printf("p->NULL = %p \np-> -10 = %x \np-> 10 = %x\n>", NULL, -10, 10);
	// ft_printf("p->NULL = %p \np-> -10 = %x \np-> 10 = %x\n>", NULL, -10, 10);
}


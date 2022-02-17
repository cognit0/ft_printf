#include "../includes/ft_printf.h"
#include <stdio.h>
#include <limits.h>



int main()
{
//	int *p;

//	printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	
//	ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);

	char *s;
	s = ft_strdup("Hello");


	printf("ORG -> %p\n", LONG_MIN);
	ft_printf("FT  -> %p\n", LONG_MIN);
	//printf("%%%c%%%s%%%d%%%i%%%d%%%i%%%%\n", 'A', "42", 42, 42 ,42 , 42);
	//ft_printf("%%%c%%%s%%%d%%%i%%%d%%%i%%%%\n", 'A', "42", 42, 42 ,42 , 42);

	// ft_printf("%%%c%%%%% \n", 'c');
	// printf("%%%c%%%%% \n", 'c');
	// printf("p->NULL = %p \np-> -10 = %x \np-> 10 = %x\n>", NULL, -10, 10);
	// ft_printf("p->NULL = %p \np-> -10 = %x \np-> 10 = %x\n>", NULL, -10, 10);
}


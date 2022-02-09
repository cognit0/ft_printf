#include <stdio.h>
#include <stdarg.h>
#include "libft.h"

void	ft_test(int n_args, ...)
{
	va_list args;

	va_start(args, n_args);
	size_t	i;

	i = 0;
	while (i < n_args)
	{
		int x = va_arg(args, int);
		printf("x: %d\n", x);
		i++;
	}
	va_end(args);
}

void	ft_print(const char *str, ...)
{
	int p_holders = ft_strlen(str);

	va_list args;
	va_start(args, str);

	for (int i = 0; i < p_holders; i++)
	{
		if (str[i] == '%' && str[i + 1] == 'd')
		{
			int s = va_arg(args, int);
			ft_putnbr_fd(s, 1);
			i++;
		}
		else if (str[i] == '%' && str[i + 1] == 'c')
		{
			char *b = va_arg(args, char *);
			ft_putstr_fd(b, 1);
			i++;
		}
		else
			ft_putchar_fd(str[i], 1);
	}
	va_end(args);
}

int main(void)
{
	char s[] = "Hello World";
	int *p;

	printf("asdf %X asdf", (unsigned short )123);
	ft_print("HELLO 1->%d 2->d 3->d MY NUMBERS\n", 5, 25, 59);
	ft_print("%c%c%c%c <--- THE CHAR BABY\n", "sa", "rp", "42", "ecole");
	// ft_test(4, 45, 22, 66, 25);
	return (0);
}

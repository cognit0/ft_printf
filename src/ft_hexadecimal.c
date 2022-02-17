#include "../includes/ft_printf.h"

void	ft_hexlow(unsigned int hex, int *rtn)
{
	char tmp;

	if (hex)
	{
		tmp = hex % 16;
		if (tmp < 10)
			tmp += 48;
		else
			tmp += 87;
		ft_hexlow(hex / 16, rtn);
		ft_putchar_fd(tmp, 1);
		(*rtn)++;
	}
}

void	ft_hexup(unsigned int hex, int *rtn)
{
	char tmp;

	if (hex)
	{
		tmp = hex % 16;
		if (tmp < 10)
			tmp += 48;
		else
			tmp += 55;
		ft_hexup(hex / 16, rtn);
		ft_putchar_fd(tmp, 1);
		(*rtn)++;
	}
}

void	ft_hexadecimal(va_list *args, char c, int *rtn)
{
	long int a;

	a = va_arg((*args), long int);
	if (a == 0 || LONG_MIN == a)
	{
		ft_putchar_fd('0', 1);
		(*rtn)++;
	}
	if (c == 'X')
		if (a < 0)
			ft_hexup(UINT_MAX + a + 1, rtn);
		else
			ft_hexup(a, rtn);
	else
		if (a < 0)
			ft_hexlow(UINT_MAX + a + 1, rtn);
		else
			ft_hexlow(a, rtn);

}

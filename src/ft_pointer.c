#include "../includes/ft_printf.h"

void	ft_putp(unsigned long p, int *rtn)
{
	char tmp;

	if (p)
	{
		tmp = p % 16;
		if (tmp < 10)
			tmp += 48;
		else
			tmp += 87;
		ft_putp(p / 16, rtn);
		ft_putchar_fd(tmp, 1);
		(*rtn)++;
	}
}

void	ft_pointer(va_list *args, int *rtn)
{
	long a = va_arg((*args), long);

	ft_putstr_fd("0x", 1);
	(*rtn) += 2;
	if (a == 0)
	{
		ft_putchar_fd('0', 1);
		(*rtn)++;
	}
	if (a < 0)
		ft_putp(ULONG_MAX + a + 1, rtn);
	else
		ft_putp(a, rtn);
}

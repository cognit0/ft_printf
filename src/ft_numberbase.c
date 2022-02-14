#include "../includes/ft_printf.h"

static int ft_getdec(unsigned int num)
{
	int i;

	i = 0;
	while (num > 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

void	ft_numberbase(int num, int *rtn, char c)
{
	if (c == 'd' || c == 'i')
	{
		ft_putnbr_fd((int )num, 1);
		if (num <= 0)
			(*rtn) += (int )ft_getdec(num * -1) + 1;
		else
			(*rtn) += ft_getdec(num);
	}
	else if (c == 'c')
	{
		ft_putchar_fd(num, 1);
		(*rtn)++;
	}
}

void	ft_unbase(unsigned int num, int *rtn)
{
	if (num > 9)
		ft_unbase(num / 10, rtn);
	ft_putnbr_fd(num % 10, 1);
	(*rtn)++;
}

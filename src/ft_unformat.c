#include "../includes/ft_printf.h"

void	ft_unformat(unsigned int num, int *rtn)
{
	if (num > 9)
		ft_unformat(num / 10, rtn);
	ft_putnbr_fd(num % 10, 1);
	(*rtn)++;
}
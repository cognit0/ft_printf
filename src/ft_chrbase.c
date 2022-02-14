#include "../includes/ft_printf.h"
#include <stdio.h>

void	ft_chrbase(char *c, int *rtn, char a)
{
	if (a == 's' && c)
	{
		ft_putstr_fd(c, 1);
		(*rtn) += ft_strlen(c);
	}
	else if (a == 's' && !c)
	{
		ft_putstr_fd("(null)", 1);
		(*rtn) += 6;
	}
	else if (a == '%' && !c)
	{
		ft_putchar_fd('%', 1);
		(*rtn) += 1;
	}
}

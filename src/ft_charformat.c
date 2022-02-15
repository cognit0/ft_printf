#include "../includes/ft_printf.h"

void	ft_charformat(va_list *args, char c, int *rtn)
{
	char *str;

	if (c == 's')
	{
 		str = va_arg((*args), char *);	
		if (str)
		{
			ft_putstr_fd(str, 1);
			(*rtn) += ft_strlen(str);
		}
		else if (!str)
		{
			ft_putstr_fd("(null)", 1);
			(*rtn) += 6;
		}
	}
	else if (c == '%')
	{
		ft_putchar_fd('%', 1);
		(*rtn)++;
	}
}

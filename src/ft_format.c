#include "../includes/ft_printf.h"

int		ft_format(va_list *args, char c, size_t *index)
{
	int rtn;

	rtn = 0;
	if (c == 'i' || c == 'd' || c == 'c' || c == 'u')
	{
		if (c == 'u')
			ft_unformat(va_arg((*args), unsigned int), &rtn);
		else
			ft_decformat(va_arg((*args), int), c, &rtn);
	}
	else if (c == 'x' || c == 'X' || c == 'p')
		ft_hexformat(args, c, &rtn);
	else if (c == 's' || c == '%')
		ft_charformat(args, c, &rtn);
	(*index)++;
	return (rtn);
}
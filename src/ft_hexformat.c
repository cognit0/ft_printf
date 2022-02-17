#include "../includes/ft_printf.h"

void	ft_hexformat(va_list *args, char c, int *rtn)
{
	if (c == 'p')
		ft_pointer(args, rtn);
	else
		ft_hexadecimal(args, c, rtn);
}

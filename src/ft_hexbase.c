#include "../includes/ft_printf.h"
#include <limits.h>

int ft_hexl(long num)
{
	int i;

	i = 0;
	while (num)
	{
		num /= 16;
		i++;
	}
	return (i);
}

void	ft_puthex_fd(char *s, int fd)
{
	int 	i;

	i = ft_strlen(s) - 1;
	while (i >= 0)
		write(fd, &s[i--], 1);
}

char *ft_hexpos(long num)
{
	char		HEX_BASE[] = "0123456789ABCDEF";
	char		*str;
	size_t	i;

	str = (char *) malloc(sizeof(char) * (ft_hexl(num) + 1));
	i = 0;
	while (num)
	{
		str[i] = HEX_BASE[num % 16];
		i++;
		num /= 16;
	}
	str[i] = '\0';
	return (str);
}

void	ft_hexpointer(size_t p, int *rtn)
{
	char HEX[100];
	char HEX_BASE[] = "0123456789abcdef";
	int	i;

	i = 0;
	ft_putstr_fd("0x", 1);
	if (!p)
	{
		ft_putchar_fd('0', 1);
		(*rtn) += 3;
		return ;
	}
	while (p)
	{
		HEX[i] = HEX_BASE[p % 16];
		p /= 16;
		i++;
	}
	(*rtn) += i + 2;
	ft_puthex_fd(HEX, 1);
}

void	ft_hexbase(long p, int *rtn, char c)
{
	char *str;

	if (!p)
	{
		ft_putchar_fd('0', 1);
		(*rtn)++;
		return ;
	}
	if (p > 0)
		str = ft_hexpos(p);
	else
	{
		//str = ft_hexnega(p);
		str = ft_strdup("NEG");
	}
	(*rtn) += ft_strlen(str);
	if (c == 'x')
		ft_makelower(str);
	ft_puthex_fd(str, 1);
	free(str);
}

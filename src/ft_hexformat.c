#include "../includes/ft_printf.h"

void	ft_puthex_fd(char *str, int fd)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (i >= 0)
		write(fd, &str[i--], 1);
}

char	*ft_hexint(int a, int *rtn)
{
	char *str;
	int i = 0;
	char HEX[] = "0123456789abcdef";
	
	str = (char *) malloc(sizeof(char) * (ft_outdec(a, 16) + 1));
	while (a)
	{
		str[i] = HEX[a % 16];
		a /= 16;
		i++;
	}
	str[i] = '\0';
	(*rtn) = ft_strlen(str);
	return (str);
}
#include <stdio.h>

void	ft_hexformat(va_list *args, char c, int *rtn)
{
	char *str;
	unsigned int a = 0;

	if (c == 'p')
	{
		long long a = va_arg((*args), long long );
		printf("%llx", a);

	}
	else if (c == 'x' || c == 'X')
	{
		if ((va_arg((*args), unsigned int)) > INT_MAX)
		{
			//str = ft_hexunf(va_arg((*args), unsigned int), char c,&rtn);
			printf("%x", a);
			(*rtn)++;
		}
		else
		{
			str = ft_hexint(a, rtn);
			ft_puthex_fd(str, 1);
			free(str);
		}
	}
}
#include "libft.h"

void	ft_makelower(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
		i++;
	}
}

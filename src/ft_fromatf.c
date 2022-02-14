#include "../includes/ft_printf.h"

int		ft_formatd(const char *s, size_t *ind, long int p)
{
	int rtn;

	rtn = 0;
	if (s[(*ind) + 1] == 'u')
	{
		ft_unbase((unsigned int )p , &rtn);
		(*ind)++;
		return (rtn);
	}
	ft_numberbase(p, &rtn, s[(*ind) + 1]);
	(*ind)++;
	return (rtn);
}

int		ft_formats(const char *s, size_t *ind, void *p)
{
	int rtn;

	rtn = 0;
	ft_chrbase((char *)p, &rtn, s[(*ind) + 1]);
	(*ind)++;
	return (rtn);
}

int		ft_formath(const char *s, size_t *ind, long long p)
{
	int rtn;

	rtn = 0;
	if (s[(*ind) + 1] == 'p')
	{
		ft_hexpointer((unsigned int )p, &rtn);
		(*ind)++;
		return (rtn);
	}
	ft_hexbase(p, &rtn, s[(*ind) + 1]);
	(*ind)++;
	return (rtn);
}

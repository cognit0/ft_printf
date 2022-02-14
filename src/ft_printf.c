/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerkiral <yerkiral@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:22:14 by yerkiral          #+#    #+#             */
/*   Updated: 2022/02/09 18:26:03 by yerkiral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

bool ft_numbase(size_t i, const char *str)
{
	return (str[i] == '%' && (str[i + 1] == 'd' ||
				str[i + 1] == 'i' || str[i + 1] == 'u' ||
				str[i + 1] == 'c'));
}

bool ft_hxbase(size_t i, const char *str)
{
	return (str[i] == '%' && (str[i + 1] == 'p' ||
				str[i + 1] == 'x' || str[i + 1] == 'X'));
}

bool ft_charbase(size_t i, const char *str)
{
	return (str[i] == '%' && (str[i + 1] == 's'
				|| str[i + 1] == '%'));
}

int		ft_printf(const char *str, ...)
{
	va_list args;
	size_t	i;
	int			rtn;

	va_start(args, str);
	i = 0;
	rtn = 0;
	while (str[i])
	{
		if (ft_numbase(i, str))
			rtn += ft_formatd(str, &i, va_arg(args, long int));
		else if (ft_charbase(i, str))
		{
			if (str[i + 1] == '%')
				rtn += ft_formats(str, &i, NULL);
			else
				rtn += ft_formats(str, &i, va_arg(args, void *));
		}
		else if (ft_hxbase(i, str))
			rtn += ft_formath(str, &i, va_arg(args, long long));
		else
		{
			ft_putchar_fd(str[i], 1);
			rtn++;
		}
		i++;
	}
	va_end(args);
	return (rtn);
}

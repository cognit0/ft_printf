/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decformat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerkiral <yerkiral@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:58:26 by yerkiral          #+#    #+#             */
/*   Updated: 2022/02/15 15:00:10 by yerkiral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_decformat(int num, char c, int *rtn)
{
	if (c == 'd' || c == 'i')
	{
		ft_putnbr_fd(num, 1);
		if (num <= 0)
			(*rtn) += (int )ft_outdec(num * -1, 10) + 1;
		else
			(*rtn) += ft_outdec(num, 10);
	}
	else if (c == 'c')
	{
		ft_putchar_fd(num, 1);
		(*rtn)++;
	}
}

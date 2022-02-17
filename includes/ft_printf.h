/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerkiral <yerkiral@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:19:53 by yerkiral          #+#    #+#             */
/*   Updated: 2022/02/15 15:09:34 by yerkiral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <limits.h>
# include <stdarg.h>
# include <stdbool.h>

int		ft_printf(const char *str, ...);

void	ft_charformat(va_list *args, char c, int *rtn);
void	ft_decformat(int num, char c, int *rtn);
void	ft_unformat(unsigned int num, int *rtn);
void	ft_hexformat(va_list *args, char c, int *rtn);
void	ft_hexadecimal(va_list *args, char c, int *rtn);
void	ft_pointer(va_list *args, int *rtn);

int		ft_format(va_list *args, char c, size_t *index);
int		ft_outdec(unsigned int a, int base);

#endif

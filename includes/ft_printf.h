/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerkiral <yerkiral@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:19:53 by yerkiral          #+#    #+#             */
/*   Updated: 2022/02/09 18:19:54 by yerkiral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <stdbool.h>

int		ft_printf(const char *str, ...);

void	test_fun();

void	ft_hexpointer(size_t p, int *rtn);
void	ft_hexbase(long p, int *rtn, char c);
void	ft_chrbase(char *c, int *rtn, char a);
void	ft_numberbase(int num, int *rtn, char c);
void	ft_unbase(unsigned int num, int *rtn);

int		ft_formats(const char *s, size_t *ind, void *p);
int		ft_formatd(const char *s, size_t *ind, long int p);
int		ft_formath(const char *s, size_t *ind, long long p);

#endif

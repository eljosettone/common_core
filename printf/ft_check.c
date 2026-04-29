/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 10:51:19 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/29 14:23:47 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_check(va_list arg, char c)
{
	int		res;

	res = 0;
	if (c == 'c')
		res = ft_putchar_fd(va_arg(arg, int));
	if (c == 's')
		res = ft_putstr(va_arg(arg, char *));
	if (c == 'p')
		res = ;
	if (c == 'd')
		res = ;
	if (c == 'i')
		res = ft_putnbr(va_arg(arg, int));
	if (c == 'u')
		res = ;
	if (c == 'x')
		res = ft_hexa_lower(var_arg(arg, int));
	if (c == 'X')
		res = ft_hexa_upper();
	if (c == '%')
		res = ft_putchar('%');
	return (res);
}

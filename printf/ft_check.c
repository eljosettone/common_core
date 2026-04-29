/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fannyallegre <fannyallegre@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 10:51:19 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/29 22:00:23 by fannyallegr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(va_list *arg, char c)
{
	int		res;

	res = 0;
	if (c == 'c')
		res = ft_putchar(va_arg(*arg, int));
	if (c == 's')
		res = ft_putstr(va_arg(*arg, char *));
	if (c == 'p')
		res = ft_point_hexa(va_arg(*arg, void *));
	if (c == 'i' || c == 'd')
		res = ft_putnbr(va_arg(*arg, int));
	if (c == 'u')
		res = ft_putunbr(va_arg(*arg, unsigned int));
	if (c == 'x')
		res = ft_hexa_lower(va_arg(*arg, unsigned int));
	if (c == 'X')
		res = ft_hexa_upper(va_arg(*arg, unsigned int));
	if (c == '%')
		res = ft_putchar('%');
	return (res);
}

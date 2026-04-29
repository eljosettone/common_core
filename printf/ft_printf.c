/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fannyallegre <fannyallegre@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 10:32:42 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/29 21:30:02 by fannyallegr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		o;
	va_list	arg;

	i = 0;
	o = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] != '%')
		{
			o += ft_putchar(str[i]);
			i++;
		}
		else
		{
			if (str[i + 1] != '\0')
			{
				o += ft_check(&arg, str[i + 1]);
				i += 2;
			}
		}
	}
	va_end(arg);
	return (o);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 10:32:42 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/29 14:12:21 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
			o += ft_putchar_fd(str[i]);
			i++;
		}
		else
		{
			if (str[i + 1] != '\0')
			{
				o += ft_check(arg, str[i + 1]);
				i++;
			}
		}
	}
	va_end(arg);
	return (o);
}

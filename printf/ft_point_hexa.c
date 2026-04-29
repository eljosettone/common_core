/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fannyallegre <fannyallegre@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 15:38:04 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/29 21:59:57 by fannyallegr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(unsigned long ptr)
{
	char			*base;
	int				i;

	base = "0123456789abcdef";
	i = 0;
	if (ptr >= 16)
	{
		i += ft_print_hexa((ptr / 16));
		i += ft_print_hexa((ptr % 16));
	}
	else
		i += ft_putchar(base[ptr]);
	return (i);
}

int	ft_point_hexa(void *ptr)
{
	int	i;

	i = 0;
	if (!ptr)
		return (write (1, "(nil)", 5));
	i += write(1, "0x", 2);
	i += ft_print_hexa((unsigned long)ptr);
	return (i);
}
// #include <stdio.h>
// int	main()
// {
// 	char *i= "saut ca va";
// 	printf("%d", ft_point_hex((void *)i));
// }

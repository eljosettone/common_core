/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 15:38:04 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/29 17:58:11 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(void *ptr)
{
	char			*base;
	int				i;
	unsigned long	nb;

	base = "0123456789abcdef";
	i = 0;
	nb = (unsigned long)ptr;
	if (nb >= 16)
	{
		i += ft_print_hexa((void *)(nb / 16));
		i += ft_print_hexa((void *)(nb % 16));
	}
	else
		i += ft_putchar(base[nb % 16]);
	return (i);
}

int	ft_point_hex(void *ptr)
{
	int	i;

	i = 0;
	if (!ptr)
		return (write (1, "(null)", 6));
	i += write(1, "0x", 2);
	i += ft_point_hexa(ptr);
	return (i);
}
// #include <stdio.h>
// int	main()
// {
// 	char *i= "saut ca va";
// 	printf("%d", ft_point_hex((void *)i));
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_upper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 14:21:44 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/29 18:28:22 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_upper(int nbr)
{
	char	*base;
	int		i;

	base = "0123456789ABCDEF";
	i = 0;
	if (nbr < 0)
	{
		i += write (1, "-", 1);
		nbr *= -1;
	}
	if (nbr >= 16)
	{
		i += ft_hexa_upper (nbr / 16);
		i += ft_hexa_upper (nbr % 16);
	}
	else
		i += ft_putchar(base[nbr % 16]);
	return (i);
}
// #include <stdio.h>
// int	main()
// {
// 	printf("%i", ft_hexa_upper(-11234));
// }
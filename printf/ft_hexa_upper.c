/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_upper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fannyallegre <fannyallegre@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 14:21:44 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/29 21:03:13 by fannyallegr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_upper(unsigned int nbr)
{
	char	*base;
	int		i;

	base = "0123456789ABCDEF";
	i = 0;
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_lower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fannyallegre <fannyallegre@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 19:26:32 by fannyallegr       #+#    #+#             */
/*   Updated: 2026/04/29 21:03:51 by fannyallegr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_lower(unsigned int nbr)
{
	char	*base;
	int		i;

	base = "0123456789abcdef";
	i = 0;
	if (nbr >= 16)
	{
		i += ft_hexa_lower (nbr / 16);
		i += ft_hexa_lower (nbr % 16);
	}
	else
		i += ft_putchar(base[nbr % 16]);
	return (i);
}

// #include <stdio.h>
// int	main()
// {
// 	printf("%i", ft_hexa_lower(-11234));
// }
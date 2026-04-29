/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 15:28:47 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/29 16:00:43 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		i += ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 0 && nb < 10)
		i += ft_putchar(nb + '0');
	else
	{
		i += ft_putnbr((nb / 10));
		i += ft_putnbr((nb % 10));
	}
	return (i);
}

// #include <stdio.h>
// int	main()
// {
// 	printf("%d", ft_putnbr(-126888890098663));
// }
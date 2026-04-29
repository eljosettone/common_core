/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 14:40:10 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/29 18:28:30 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned long nb)
{
	int	i;

	i = 0;
	if (nb <= 9)
		i += ft_putchar(nb + '0');
	else
	{
		i += ft_putunbr(nb / 10);
		i += ft_putunbr(nb % 10);
	}
	return (i);
}
// #include <stdio.h>
// int	main()
// {
// 	printf("%d", ft_putunbr(-12688663));
// }
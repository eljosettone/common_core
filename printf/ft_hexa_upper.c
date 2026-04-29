/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_upper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 14:21:44 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/29 14:36:24 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_hexa_upper(unsigned int nbr)
{
	char	*base;
	int		re;

	base = "0123456789ABCDEF";
	re = 0;
	if (nbr >= 16)
	{
		ft_hexa_upper (nbr) / 16;
		ft_hexa_upper (nbr % 16);
	}
	else
		ft_putchar(nbr % 16);
	return (res);
}
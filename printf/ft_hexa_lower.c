/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_lower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 19:26:32 by fannyallegr       #+#    #+#             */
/*   Updated: 2026/04/29 14:36:40 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_hexa_lower(unsigned int nbr)
{
	char	*base;
	int		re;

	base = "0123456789abcdef";
	re = 0;
	if (nbr >= 16)
	{
		ft_hexa_lower (nbr / 16);
		ft_hexa_lower (nbr % 16);
	}
	else
		ft_putchar(nbr % 16);
	return (res);
}

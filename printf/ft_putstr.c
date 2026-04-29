/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fannyallegre <fannyallegre@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 15:26:43 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/29 21:51:04 by fannyallegr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;

	if (!str)
		return (write (1, "(null)", 6));
	i = 0;
	while (str[i])
		i += ft_putchar(str[i]);
	return (i);
}
// #include <stdio.h>
// int	main()
// {
// 	printf("%d", ft_putstr("coucou"));
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 18:18:22 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/24 10:08:46 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	while (*str)
	{
		write (fd, str, 1);
		str++;
	}
}

/*int	main()
{
	ft_putstr("coucou\n");
	ft_putstr("&^%$\n");
	return (0);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fannyallegre <fannyallegre@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 18:18:22 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/26 18:46:55 by fannyallegr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	if (!str)
		return (NULL);
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fannyallegre <fannyallegre@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 18:19:42 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/26 18:51:16 by fannyallegr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar_fd('-');
		nb = nb * -1;
	}
	if (nb >= 0 && nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr_fd((nb / 10), fd);
		ft_putnbr_fd((nb % 10), fd);
	}
}

/*
int	main()
{
	ft_putnbr_fd(4254);
	ft_putchar('\n');
	ft_putnbr_fd(9);
	ft_putchar('\n');
	ft_putnbr_fd(-2147483648);
	ft_putchar('\n');
	ft_putnbr_fd(0);
	ft_putchar('\n');
	ft_putnbr_fd(2147483647);
	ft_putchar('\n');

}*/
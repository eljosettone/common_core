/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:59:23 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/27 09:19:00 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		nb *= -1;
		i++;
	}
	while (nb > 0)
	{
		i++;
		nb /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	i;

	i = ft_count(n);
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	i--;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	return (str);
}

// #include <stdio.h>
// int	main()
// {
// 	printf("%s\n", ft_itoa(12345));
// 	printf("%s\n", ft_itoa(-12345));
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(-2147483648));
// 	printf("%s\n", ft_itoa(2147483647));
// 	return (0);
// }
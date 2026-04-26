/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fannyallegre <fannyallegre@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:19:15 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/26 19:22:48 by fannyallegr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	signe;
	int	rtr;

	i = 0;
	rtr = 0;
	signe = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		rtr = rtr * 10 + (str[i] - '0');
		i++;
	}
	return (signe * rtr);
}
/*
#include <stdio.h>
int	main()
{
	char *str;
	str = "   --1234ab567";
	printf("%d\n", ft_atoi(str));
	return (0);
}*/

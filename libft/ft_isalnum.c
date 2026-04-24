/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:25:06 by fannyalle         #+#    #+#             */
/*   Updated: 2026/04/24 10:15:48 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

// int	ft_isalpha(int c)
// {
// 	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
// 	{
// 		return (1);
// 	}
// 	return (0);
// }

// int	ft_isdigit(int c)
// {
// 	if (c >= '0' && c <= '9')
// 	{
// 		return (1);
// 	}
// 	return (0);
// }

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/*
#include <stdio.h>
int	main()
{
	printf("%i\n", ft_isalnum(0));
	printf("%i\n", ft_isalpha('c'));
	printf("%i\n", ft_isalpha('/'));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:39:28 by fannyalle         #+#    #+#             */
/*   Updated: 2026/04/24 10:16:41 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 || c <= 177)
		return (1);
	return (0);
}

/*
#include <stdio.h>
int	main()
{
	printf("%i\n", ft_isascii('a'));
}*/

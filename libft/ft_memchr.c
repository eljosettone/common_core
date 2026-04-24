/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:30:23 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/22 15:47:49 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	d;

	str = (unsigned char *) s;
	d = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == d)
		{
			return ((void *) &str[i]);
		}
		i++;
	}
	return (NULL);
}
// #include <stdio.h>
// int	main()
// {
// 	char s1[] = "bonjour";
// 	char *s2 = ft_memchr(s1, 'j', 4);
// 	if (s2)
// 	{
// 		printf("%c\n", s2);
// 	}
// 	return (0);
// }
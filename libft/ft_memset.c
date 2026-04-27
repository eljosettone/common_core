/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 10:29:31 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/27 13:17:34 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = (unsigned char *)s;
	while (i < n)
	{
		*tmp = (unsigned char)c;
		tmp++;
		i++;
	}
	return (s);
}
// #include <stdio.h>
// int	main()
// {
// 	char *s1 = "hohhoyoyoyoyohooohoo";
// 	char *s2 = ft_memset(s1, y, 8);
// 	printf("%s\n", s2);
// 	return (0);
// }
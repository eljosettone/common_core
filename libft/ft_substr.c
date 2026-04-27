/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:44:46 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/27 14:39:23 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	biglen;
	char	*str;

	if (!s)
		return (NULL);
	biglen = ft_strlen(s);
	if (start > biglen)
		return (ft_strdup(""));
	if (len > biglen - start)
		len = biglen - start;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>
// int	main()
// {
// 	printf("%d\n", ft_substr("caca pipi prout", 3, 6));
// 	return (0);
// }
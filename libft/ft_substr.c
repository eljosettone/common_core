/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:44:46 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/23 17:00:14 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

int		ft_strlen(char *str);
char	*ft_strdup(char *src);
void	*ft_calloc(size_t n, size_t size);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	int		biglen;

	biglen = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > biglen)
		return (ft_strdup(s));
	if (len > biglen + start)
		len = biglen + start;
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int	main()
// {
// 	printf("%d\n", ft_substr("caca pipi prout", 3, 6));
// 	return (0);
// }
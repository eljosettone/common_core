/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:50:40 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/27 14:26:15 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	condition(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && condition (set, s1[i]))
		i++;
	while (j > i && condition (set, s1[j - 1]))
		j--;
	str = malloc(sizeof(char) * (j - i + 1));
	if (!str)
		return (NULL);
	ft_memcpy(str, s1 + i, j - i);
	str[j - i] = '\0';
	return (str);
}
// #include <stdio.h>
// int	main()
// {
// 	printf("%s\n", ft_strtrim("kokokokokCoucou toi kokokok", "ko"));
// 	return (0);
// }
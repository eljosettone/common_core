/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fannyallegre <fannyallegre@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:50:40 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/26 18:32:17 by fannyallegr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	condition(char *str, char c)
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

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	start = 0;
	end = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (condition (s1[i], set))
		i++;
	while (j > i && condition (set, s1[j - 1]))
		j--;
	str = malloc(sizeof(char) * (j - (i - 1)));
	if (!str)
		return (NULL);
	while (i < j)
	{
		*str = s1[i];
		*str++;
		i++;
	}
	return (str);
}
// #include <stdio.h>
// int	main()
// {
// 	printf("%s\n", ft_strtrim("kokokokokCoucou toi kokokok", "ko"));
// 	return (0);
// }
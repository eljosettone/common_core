/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 08:54:24 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/27 12:07:23 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*result;

	i = 0;
	len = ft_strlen(s);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	while (i < len)
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*
#include <stdio.h>

int	next_letter(char *s)
{
	return (s[i + 1]);
}

int	main(void)
{
	int tab[] = "abcd";
	int *p;
	int i = 0;
	p = ft_strmapi(tab, next_letter(tab));
	while (tab[i])
	{
		printf("%d", p[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/
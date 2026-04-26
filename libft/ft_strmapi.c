/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fannyallegre <fannyallegre@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 08:54:24 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/26 18:33:06 by fannyallegr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*result;

	i = 0;
	result = malloc(sizeof(char) * (ft_strlen(s) + 1));
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
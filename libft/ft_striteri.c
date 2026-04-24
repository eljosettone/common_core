/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 09:36:12 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/24 09:50:39 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))

{
	unsigned int	i;
	
	i = 0;
	while (s[i])
	{
		(*f), (i, &s[i]);
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
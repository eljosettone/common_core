/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fannyallegre <fannyallegre@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 09:36:12 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/26 18:33:40 by fannyallegr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))

{
	unsigned int	i;
	
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
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
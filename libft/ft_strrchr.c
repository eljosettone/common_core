/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 18:09:58 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/21 18:36:00 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			j = i;
		i++;
	}
	if (j != 0)
		return ((char *) s + j);
	return (0);
}

/*
#include <stdio.h>
int main() {
    char *s = "coucoucoucoucocuoczuocu";
    char *find = ft_strchr(s, 'z');
    printf("%s", find);
    return 0;
}*/

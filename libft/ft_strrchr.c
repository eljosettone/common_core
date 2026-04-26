/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fannyallegre <fannyallegre@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 18:09:58 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/26 19:18:25 by fannyallegr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
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
	if (j == 0)
		j = i;
	if (j != 0)
		return ((char *) s + j);
}

/*
#include <stdio.h>
int main() {
    char *s = "coucoucoucoucocuoczuocu";
    char *find = ft_strchr(s, 'z');
    printf("%s", find);
    return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 18:09:58 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/27 14:12:48 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	i = 0;
	str = NULL;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			str = (char *)&s[i];
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	return (str);
}

/*
#include <stdio.h>
int main() {
    char *s = "coucoucoucoucocuoczuocu";
    char *find = ft_strchr(s, 'z');
    printf("%s", find);
    return 0;
}*/

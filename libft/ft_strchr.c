/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:57:32 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/21 18:09:06 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
		return ((char *) &s[i]);
	return (0);
}

/*
#include <stdio.h>

int main() {
    char *s = "coucoucoucoucocuoczuocu";
    char *find = ft_strchr(s, 'z');
    printf("%s", find);
    return 0;
}
*/

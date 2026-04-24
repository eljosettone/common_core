/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 15:55:31 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/21 17:15:37 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *des, const char *src, size_t sizeofdes)
{
	size_t		i;

	i = 0;
	if (sizeofdes > 0)
	{
		while (src[i] && i < (sizeofdes - 1))
		{
			des[i] = src[i];
			i++;
		}
		des[i] = '\0';
	}
	return (ft_strlen(src));
}

/*#include <stdio.h>
int main()
{
	char str1[] = "caca";
	char str2[] = "pipi";
	size_t sizeofdes = 3;

	printf("src before: '%s'\n", str1);
	printf("des after: '%s'\n", str2);
	printf("sizeofdes: %zu\n", size);
	printf("src strlen: %zu\n", ft_strlcpy(str2, str1, 6));
	printf("des after all: '%s'\n", str2);

	return(0);
}*/

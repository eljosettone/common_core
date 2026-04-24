/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:24:42 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/21 17:25:14 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*des;

	if (src == NULL)
		return (0);
	i = 0;
	while (src[i])
	{
		i++;
	}
	des = malloc(sizeof(char) * (i + 1));
	if (des == NULL)
		return (0);
	i = 0;
	while (src[i])
	{
		des[i] = src[i];
		i++;
	}
	des[i] = '\0';
	return (des);
}

/*#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char src[] = {"coucou"};
	char *des;

	des = ft_strdup(src);
	if (des == NULL)
		return 1;
	printf("%s\n", des);
	free(des);
	return (0);
}*/

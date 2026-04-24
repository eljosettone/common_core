/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:32:29 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/23 14:38:01 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_grossechaine(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	if (size == 0)
		return (1);
	i = 0;
	total = 0;
	while (i < size)
	{
		total = total + ft_strlen(strs[i]);
		if (i < size - 1)
			total = total + ft_strlen(sep);
		i++;
	}
	total = total + (size - 1) * ft_strlen(sep) + 1;
	return (total);
}

char	*ft_concat(char *des, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (des[i])
		i++;
	while (src[j])
	{
		des[i + j] = src[j];
		j++;
	}
	des[i + j] = '\0';
	return (des);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;

	if (size == 0)
	{
		str = malloc(sizeof(char));
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	str = malloc(sizeof(char) * ft_grossechaine(size, strs, sep));
	if (!str)
		return (NULL);
	str[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_concat(str, strs[i]);
		if (i < size - 1)
			ft_concat(str, sep);
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main()
{
	char *tab[] = {"KfFWqcajQLEWVxuXbrFZmUAIIR"};
	char *sep = "mKJS";
	char *result;

	result = ft_strjoin(1, tab, sep);
	if (!result)
		return (1);
	printf("%s\n", result);
	free(result);
	return (0);
}*/
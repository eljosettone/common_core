/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:41:11 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/23 17:52:57 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && ft_separator(str[i], charset))
			i++;
		if (str[i] && !ft_separator(str[i], charset))
		{
			count++;
			while (str[i] && !ft_separator(str[i], charset))
				i++;
		}
	}
	return (count);
}

char	*malloc_word(char *str, char *charset)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && !ft_separator(str[i], charset))
		i++;
	word = malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] && !ft_separator(str[i], charset))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

void	free_split(char **arr, int j)
{
	while (j > 0)
		free(arr[--j]);
	free(arr);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	arr = malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (!arr)
		return (NULL);
	while (str[i])
	{
		while (str[i] && ft_separator(str[i], charset))
			i++;
		if (str[i] && !ft_separator(str[i], charset))
		{
			arr[j] = malloc_word(&str[i], charset);
			if (!arr[j])
			{
				free_split(arr, j);
				return (NULL);
			}
			j++;
			while (str[i] && !ft_separator(str[i], charset))
				i++;
		}
	}
	arr[j] = NULL;
	return (arr);
}

//  #include <stdio.h>

// int main()
//  {
//  	char **arr;

//  	arr = ft_split("bonsoa+++--ca+va     bien", "+- ");
// 	int i = 0;
// 	if (!arr)
// 		return (0);
// 	while (arr[i])
// 	{
// 		printf("%s\n", arr[i]);
// 		i++;
// 	}
// 	return (0);
//  }
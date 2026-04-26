/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fannyallegre <fannyallegre@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:41:11 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/26 19:15:41 by fannyallegr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>


int	count_words(const char *str, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

char	*malloc_word(const char *str, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	word = malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != c)
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
	{
		free(arr[j]);
		j--;
	}
	free(arr);
}

void	separation(const char *str, char **arr, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] && str[i] == c)
		i++;
	if (str[i] && s[i] != c)
	{
		arr[j] = malloc_word(&str[i], c);
		if (!arr[j])
		{
			free_split(arr, j);
			return (NULL);
		}
		j++;
		while (str[i] && s[i] != c)
			i++;
	}
}

char	**ft_split(const char *str, char c)
{
	char	**arr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	arr = malloc(sizeof(char *) * (count_words(str, c) + 1));
	if (!arr)
		return (NULL);
	while (str[i])
	{
		separation(str, arr, c);
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
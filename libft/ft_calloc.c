/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:00:58 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/27 09:57:46 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = malloc(n * size);
	if (!tmp)
	{
		return (NULL);
	}
	while (tmp[i])
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}
//  #include <stdio.h>
//  int main()
//  {
// 	int *arr;
// 	int	i;
// 	i = 0;
// 	arr = (int *)ft_calloc(5, sizeof(int));
// 	while (i < 5)
// 	{
// 		printf("%d\n", arr[i]);
// 		i++;
// 	}
//  }
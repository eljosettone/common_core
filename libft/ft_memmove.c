/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 13:12:45 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/22 15:40:04 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp_src;
	char	*tmp_dest;
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	tmp_dest = (char *) dest;
	tmp_src = (char *) src;
	if (tmp_src < tmp_dest)
	{
		while (n > 0)
		{
			tmp_dest[n] = tmp_src[n];
			n--;
		}
		else
		{
			while (i++ < len)
				tmp_dest[i] = tmp_src[i];
		}
	}
	return (dest);
}
// #include <stdio.h>
// int	main()
// {
// 	char *s = "caca";
// 	ft_memmove(s + 2, s, 2)
// 	printf("%s\n", s1);
// 	return (0);
// }
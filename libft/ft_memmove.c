/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 13:12:45 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/27 14:23:42 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp_src;
	char	*tmp_dest;

	tmp_dest = (char *) dest;
	tmp_src = (char *) src;
	if (!dest && !src)
		return (NULL);
	if (tmp_src < tmp_dest)
	{
		while (n > 0)
		{
			tmp_dest[n - 1] = tmp_src[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(tmp_dest, tmp_src, n);
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
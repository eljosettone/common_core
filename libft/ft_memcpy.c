/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fannyallegre <fannyallegre@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 12:38:35 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/26 18:52:33 by fannyallegr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_src;
	unsigned char	*tmp_dest;

	if (src == 0 && dest == 0)
	{
		return (dest);
	}
	tmp_dest = (unsigned char *) dest;
	tmp_src = (unsigned char *)src;
	while (n > 0)
	{
		*tmp_dest = *tmp_src;
		tmp_dest++;
		tmp_src++;
		n--;
	}
	return (dest);
}
// #include <stdio.h>
// int	main()
// {
// 	char *src = "coucou toi";
// 	char dest[10];
// 	ft_memcpy(dest, src, 11);
// 	printf("%s\n", dest);
// 	return (0);
// }
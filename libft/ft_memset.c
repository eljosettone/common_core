/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fannyallegre <fannyallegre@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 10:29:31 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/26 18:52:04 by fannyallegr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp;

	while (len > 0)
	{
		*tmp = (unsigned char) c;
		tmp++;
		len--;
	}
	return (s);
}
// #include <stdio.h>
// int	main()
// {
// 	char *s1 = "coucou toi";
// 	char *s2 = ft_memset(s1, c, 5);
// 	printf("%s\n", s2);
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 12:30:00 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/22 15:52:15 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*tmp;

	tmp = (char *)s;
	while (n > 0)
	{
		tmp = 0;
		tmp++;
		n--;
	}
}
// #include <stdio.h>
// int	main()
// {
// 	char *s1 =  "hello";
// 	char *s2 = ft_bzero(s1, 6);
// 	printf("%s\n", s2);
// 	return (0)
// }
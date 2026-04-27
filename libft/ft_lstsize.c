/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:04:35 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/27 10:11:16 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
// #include <stdio.h>
// #include "libft.h"
// int	main()
// {
// 	t_list *lst;
// 	lst = ft_lstnew("a");
// 	ft_lstadd_back(&lst, ft_lstnew("b"));
// 	ft_lstadd_back(&lst, ft_lstnew("c"));
// 	printf("%d\n", ft_lstsize(lst));
// }
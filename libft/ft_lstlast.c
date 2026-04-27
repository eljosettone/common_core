/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:15:22 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/27 10:33:37 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (lst->next == NULL)
		{
			return (lst);
		}
		lst = lst->next;
	}
	return (lst);
}
// #include <stdio.h>
// #include "libft.h"
// int	main()
// {
// 	t_list *lst;
// 	t_list *last;
// 	lst = ft_lstnew("a");
// 	ft_lstadd_back(&lst, ft_lstnew("b"));
// 	ft_lstadd_back(&lst, ft_lstnew("c"));
// 	last = ft_lstlast(lst);
// 	printf("%d\n", (char *)last->content);
// }
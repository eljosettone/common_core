/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 14:43:44 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/27 10:33:24 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
// #include <stdio.h>
// #include "libft.h"

// void print(void *v)
// {
// 	printf("%s\n", (char*)v);
// }

// int	main()
// {
// 	t_list *lst;
// 	lst = ft_lstnew("a");
// 	ft_lstadd_back(&lst, ft_lstnew("b"));
// 	ft_lstadd_back(&lst, ft_lstnew("c"));
// 	ft_lstiter(lst, print);
// }
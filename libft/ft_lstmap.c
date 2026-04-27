/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 14:54:50 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/27 11:43:46 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_list(t_list *lst, void (*del)(void *))
{
	t_list	*tmp;

	while (lst)
	{
		tmp = lst->next;
		del(lst->content);
		free(lst);
		lst = tmp;
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_elem = ft_lstnew(f(lst->content));
		if (!new_elem)
		{
			free_list(new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_elem);
		lst = lst->next;
	}
	return (new_list);
}
// #include <stdio.h>
// #include <stlib.h>

// void	*fois_deux(void *v)
// {
// 	int *res;

// 	res = malloc(sizeof(int));
// 	*res = (*(int *)v) * 2;
// 	return (res);
// }
// void	delete(void *v)
// {
// 	free(v);
// }

// int	main()
// {
// 	char *lst;
// 	char *new;
// 	int	*a;

// 	a = malloc(sizeof(int));
// 	b = malloc(sizeof(int));
// 	int *a = 2;
// 	int *b = 3;

// 	lst = ft_lstnew(a);
// 	ft_last_add_back(&lst, ft_lstnew(b));
// 	new = ft_lastmap(lst, fois_deux, delete);

// 	while (new)
// 	{
// 		printf("%d\n", *(int *)new->content)
// 		new = mew->content;
// 	}
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 14:23:39 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/27 11:42:00 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
// #include <stdio.h>
// #include <stdlib.h>
// #include "libft.h"

// void del(void *v)
// {
// 	free(v);
// }

// int	main()
// {
// 	t_list	*node;
// 	char	*str = malloc(7);
// 	str = "coucou";
// 	node = ft_lstnew(str);
// 	ft_lstdelone(node, del);
// }
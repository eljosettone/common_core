/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 14:04:46 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/27 10:16:56 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	if (!last)
		*lst = new;
	else
		last->next = new;
}
// #include <stdio.h>
// #include "libft.h"

// int	main()
// {
// 	t_list *lst;
// 	lst = ft_lstnew("a");
// 	ft_lstadd_back(&lst, ft_lstnew("b"));
// 	printf("%s\n", (char *)lst->content, (char *)lst->next->content);
// }
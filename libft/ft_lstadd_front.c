/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:37:35 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/27 10:15:46 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>
// #include "libft.h"

// int	main()
// {
// 	t_list *lst;
// 	lst = ft_lstnew("a");
// 	ft_lstadd_front(&lst, ft_lstnew("b"));
// 	printf("%s\n", (char *)lst->content);
// }
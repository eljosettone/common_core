/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:07:22 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/27 10:34:01 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

// #include <stdio.h>
// #include "lift.h"
// int	main()
// {
// 	t_list *node;
// 	node = ft_lstnew("caca");
// 	printf("%s\n", (char *)node->content);
// 	return (0);
// }
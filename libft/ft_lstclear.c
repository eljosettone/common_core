/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fannyallegre <fannyallegre@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 14:30:51 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/26 19:01:05 by fannyallegr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void(*del)(void*))
{
	t_list	*vide;

	while (*lst)
	{
		vide = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = vide;
	}
}

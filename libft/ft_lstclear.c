/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:42:02 by mbraga-s          #+#    #+#             */
/*   Updated: 2022/11/22 12:27:14 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*n_node;

	if (!lst || !*lst)
		return ;
	while ((*lst != NULL))
	{
		n_node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = n_node;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:40:00 by mbraga-s          #+#    #+#             */
/*   Updated: 2022/11/22 13:36:14 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;

	if (!lst)
		return (NULL);
	new = 0;
	while (lst)
	{
		node = ft_lstnew (f(lst->content));
		if (node == NULL)
		{
			ft_lstclear (&new, del);
			return (NULL);
		}
		ft_lstadd_back (&new, node);
		lst = lst->next;
	}
	return (new);
}

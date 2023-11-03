/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:37:18 by mbraga-s          #+#    #+#             */
/*   Updated: 2023/11/03 16:48:58 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rra(t_list **a)
{
	rrotate(a);
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_list **b)
{
	rrotate(b);
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_list **a, t_list **b)
{
	rrotate(a);
	rrotate(b);
	ft_putstr_fd("rrr\n", 1);
}

void	rrotate(t_list **lst)
{
	t_list	*temp;
	t_list	*last;

	if (!lst || !(*lst) || !(*lst)->next)
		return;
	last = ft_lstlast(*lst);
	last->next = *lst;
	temp = *lst;
	while (temp->next != last)
		temp = temp->next;
	temp->next = NULL;
	*lst = last;
}

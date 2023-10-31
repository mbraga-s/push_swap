/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:19:59 by mbraga-s          #+#    #+#             */
/*   Updated: 2023/10/31 16:13:06 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ra(t_list **a)
{
	rotate(a);
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_list **b)
{
	rotate(b);
	ft_putstr_fd("ra\n", 1);
}

void	rotate(t_list **lst)
{
	t_list	*temp;
	t_list	*last;

	if (!(*lst) || !(*lst)->next)
		return ;
	temp = *lst;
	*lst = *temp->next;
	last = ft_lstlast(*lst);
	last->next = temp;
	temp->next = NULL;
}

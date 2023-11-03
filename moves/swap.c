/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:10:51 by mbraga-s          #+#    #+#             */
/*   Updated: 2023/11/03 18:58:24 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	sa(t_list **a)
{
	swap(a);
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_list **b)
{
	swap(b);
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_list **a, t_list **b)
{
	swap(a);
	swap(b);
	ft_putstr_fd("ss\n", 1);
}

void	swap(t_list **lst)
{
	t_list	*temp1;
	t_list	*temp2;

	if (!(*lst) || !(*lst)->next)
		return ;
	temp1 = *lst;
	temp2 = (*lst)->next->next;
	*lst = (*lst)->next;
	(*lst)->next = temp1;
	(*lst)->next->next = temp2;
}

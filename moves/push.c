/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:56:54 by mbraga-s          #+#    #+#             */
/*   Updated: 2023/11/03 19:03:25 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	pa(t_list **a, t_list **b)
{
	push(a, b);
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_list **a, t_list **b)
{
	push(b, a);
	ft_putstr_fd("pb\n", 1);
}

void	push(t_list **dst, t_list **src)
{
	t_list	*temp;

	if (!(*src))
		return ;
	temp = *src;
	*src = (*src)->next;
	temp->next = *dst;
	*dst = temp;
}

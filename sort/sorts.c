/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:25:08 by mbraga-s          #+#    #+#             */
/*   Updated: 2023/11/05 18:41:10 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	sort_2(t_list **a)
{
	if ((*a)->nbr > (*a)->next->nbr)
		sa(a);
}

void	sort_3(t_list **a)
{
	if ((*a)->nbr > (*a)->next->nbr && (*a)->nbr > (*a)->next->next->nbr)
		ra(a);
	if ((*a)->next->nbr > (*a)->next->next->nbr)
		rra(a);
	if ((*a)->nbr > (*a)->next->nbr)
		sa(a);
}

void	sort_4(t_list **a, t_list **b)
{
	pb(a, b);
	sort_3(a);
	pa(a, b);
	if ((*a)->nbr > (*a)->next->nbr && (*a)->nbr > (*a)->next->next->nbr \
			&& (*a)->nbr > (*a)->next->next->next->nbr)
		ra(a);
	else
		sort_3(a);
}

void	sort_5(t_list **a, t_list **b)
{
	pb(a, b);
	sort_4(a, b);
	if ((*a)->nbr < (*b)->nbr && (*b)->nbr < (*a)->next->nbr)
	{
		pa(a, b);
		sa(a);
	}
	else if ((*a)->next->nbr < (*b)->nbr && (*b)->nbr < (*a)->next->next->nbr)
	{
		ra(a);
		ra(a);
		pa(a, b);
		rra(a);
		rra(a);
	}
	else if ((*a)->next->next->nbr < (*b)->nbr && (*b)->nbr < (*a)->next->next->next->nbr)
	{
		rra(a);
		pa(a, b);
		ra(a);
		ra(a);
	}
	else
		pa(a, b);
}

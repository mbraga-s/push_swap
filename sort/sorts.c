/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:25:08 by mbraga-s          #+#    #+#             */
/*   Updated: 2023/11/07 00:10:16 by mbraga-s         ###   ########.fr       */
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
	if (((*a)->next->nbr < (*a)->nbr) && \
		((*a)->next->nbr < (*a)->next->next->nbr) && \
		((*a)->next->nbr < (*a)->next->next->next->nbr))
		ra(a);
	else if (((*a)->next->next->nbr < (*a)->nbr) && \
		((*a)->next->next->nbr < (*a)->next->nbr) && \
		((*a)->next->next->nbr < (*a)->next->next->next->nbr))
		repeat_move(a);
	else if (((*a)->next->next->next->nbr < (*a)->nbr) && \
		((*a)->next->next->next->nbr < (*a)->next->nbr) && \
		((*a)->next->next->next->nbr < (*a)->next->next->nbr))
		rra(a);
	pb(a, b);
	sort_3(a);
	pa(a, b);
}

/* void	sort_5(t_list **a, t_list **b)
{
	if (((*a)->next->nbr < (*a)->nbr) && \
		((*a)->next->nbr < (*a)->next->next->nbr) && \
		((*a)->next->nbr < (*a)->next->next->next->nbr) && \
		((*a)->next->nbr < (*a)->next->next->next->next->nbr))
		ra(a);
	else if (((*a)->next->next->nbr < (*a)->nbr) && \
		((*a)->next->next->nbr < (*a)->next->nbr) && \
		((*a)->next->next->nbr < (*a)->next->next->next->nbr) && \
		((*a)->next->next->nbr < (*a)->next->next->next->next->nbr))
	{
		ra(a);
		ra(a);
	}
	else if (((*a)->next->next->next->nbr < (*a)->nbr) && \
		((*a)->next->next->next->nbr < (*a)->next->nbr) && \
		((*a)->next->next->next->nbr < (*a)->next->next->nbr) && \
		((*a)->next->next->next->nbr < (*a)->next->next->next->next->nbr))
	{
		rra(a);
		rra(a);
	}
	else if (((*a)->next->next->next->next->nbr < (*a)->nbr) && \
		((*a)->next->next->next->next->nbr < (*a)->next->nbr) && \
		((*a)->next->next->next->next->nbr < (*a)->next->next->nbr) && \
		((*a)->next->next->next->next->nbr < (*a)->next->next->next->nbr))
	{
		rra(a);
	}
	pb(a, b);
	sort_4(a, b);
	pa(a, b);
} */

void	sort_5(t_list **a, t_list **b)
{
	int	sec;
	int	thi;
	int	fou;
	int	fif;

	sec = (*a)->next->nbr;
	thi = (*a)->next->next->nbr;
	fou = (*a)->next->next->next->nbr;
	fif = (*a)->next->next->next->next->nbr;
	if ((sec < (*a)->nbr) && (sec < thi) && (sec < fou) && (sec < fif))
		ra(a);
	else if ((thi < (*a)->nbr) && (thi < sec) && (thi < fou) && (thi < fif))
	{
		ra(a);
		ra(a);
	}
	else if ((fou < (*a)->nbr) && (fou < sec) && (fou < thi) && (fou < fif))
		repeat_move(a);
	else if ((fif < (*a)->nbr) && (fif < sec) && (fif < thi) && (fif < fou))
		rra(a);
	pb(a, b);
	sort_4(a, b);
	pa(a, b);
}

void	repeat_move(t_list **a)
{
	rra(a);
	rra(a);
}

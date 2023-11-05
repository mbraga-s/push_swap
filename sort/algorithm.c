/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:01:02 by mbraga-s          #+#    #+#             */
/*   Updated: 2023/11/05 23:15:11 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	proto_sort(t_list **a, t_list **b)
{
	while (ft_lstsize(*a) > 5)
	{
		if ((*a)->nbr < average(a))
			pb(a, b);
		else
			ra(a);
	}
	sort_5(a, b);
	add_index(a);
	add_index(b);
	best_friend(a, b);
	add_cost(*a, *b);
}

void	best_friend(t_list **a, t_list **b)
{
	t_list	*tmpa;
	t_list	*tmpb;
	int		i;
	int		j;

	tmpb = *b;
	while (tmpb)
	{
		tmpa = *a;
		i = 0;
		j = INT_MAX;
		while (tmpa)
		{
			i = tmpa->nbr - (tmpb)->nbr;
			if (i > 0 && i < j)
			{
				(tmpb)->bff_index = tmpa->index;
				j = i;
			}
			tmpa = tmpa->next;
		}
		tmpb = tmpb->next;
	}
}

void	add_cost(t_list *a, t_list *b)
{
	int	amoves;
	int	bmoves;
	int	asize;
	int	bsize;

	amoves = 0;
	bmoves = 0;
	asize = ft_lstsize(a) + 1;
	bsize = ft_lstsize(b) + 1;
	while (b)
	{
		if ((asize - (b)->bff_index) < ((b)->bff_index - 1))
			amoves = asize - (b)->bff_index;
		else
			amoves = (b)->bff_index - 1;
		if ((bsize - (b)->index) < ((b)->index - 1))
			bmoves = bsize - (b)->index;
		else
			bmoves = (b)->index - 1;
		(b)->cost = amoves + bmoves;
		(b) = (b)->next;
	}
}

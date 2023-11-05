/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:01:02 by mbraga-s          #+#    #+#             */
/*   Updated: 2023/11/05 22:45:24 by mbraga-s         ###   ########.fr       */
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

void	add_cost(t_list **a, t_list **b)
{
	int	total;
	int	amoves;
	int	bmoves;

	amoves = ft_lstsize(*a) - (*a)->index;
	total = amoves + bmoves;
}

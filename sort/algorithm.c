/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:01:02 by mbraga-s          #+#    #+#             */
/*   Updated: 2023/11/07 00:01:25 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	algorithm(t_list **a, t_list **b)
{
	while (ft_lstsize(*a) > 5)
	{
		if ((*a)->nbr < average(a))
			pb(a, b);
		else
			ra(a);
	}
	sort_5(a, b);
	while (*b)
	{
		add_index(b);
		add_index(a);
		best_friend(a, b);
		add_cost(*a, *b);
		put_top(a, b);
	}
	final_rot(a);
}

void	best_friend(t_list **a, t_list **b)
{
	t_list	*tmpa;
	t_list	*tmpb;
	long int	i;
	long int	j;

	tmpb = *b;
	while (tmpb)
	{
		tmpa = *a;
		i = 0;
		j = LLONG_MAX;
		while (tmpa)
		{
			i = (long long)tmpa->nbr - (long long)(tmpb)->nbr;
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

int	cost_check(t_list **b)
{
	t_list	*tmp;
	int		tcost;
	int		tindex;

	tcost = INT_MAX;
	tindex = 0;
	tmp = *b;
	while (tmp)
	{
		if (tmp->cost < tcost)
		{
			tcost = tmp->cost;
			tindex = tmp->index;
		}
		tmp = tmp->next;
	}
	return (tindex);
}

void	add_index(t_list **lst)
{
	t_list	*tmp;
	int		i;

	tmp = *lst;
	i = 1;
	while (tmp)
	{
		tmp->index = i;
		i++;
		tmp = tmp->next;
	}
}

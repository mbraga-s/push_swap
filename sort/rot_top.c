/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_top.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:30:53 by mbraga-s          #+#    #+#             */
/*   Updated: 2023/11/06 22:17:24 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	rot_a(t_list **a, int bff_index)
{
	int	lsize;
	int	i;
	int	j;

	lsize = ft_lstsize(*a) + 1;
	i = lsize - bff_index;
	j = bff_index - 1;
	if (i < j)
	{
		while (i > 0)
		{
			rra(a);
			i--;
		}
	}
	else
	{
		while (j > 0)
		{
			ra(a);
			j--;
		}
	}
}

void	rot_b(t_list **b, int index)
{
	int	lsize;
	int	i;
	int	j;

	lsize = ft_lstsize(*b) + 1;
	i = lsize - index;
	j = index - 1;
	if (i < j)
	{
		while (i > 0)
		{
			rrb(b);
			i--;
		}
	}
	else
	{
		while (j > 0)
		{
			rb(b);
			j--;
		}
	}
}

void	put_top(t_list **a, t_list **b)
{
	t_list	*tmp;

	tmp = *b;
	while (tmp)
	{
		if (tmp->index == cost_check(b))
		{
			rot_a(a, tmp->bff_index);
			rot_b(b, tmp->index);
			pa(a, b);
			break ;
		}
		tmp = tmp->next;
	}
}

void	final_rot(t_list **a)
{
	t_list	*tmp;
	int		min;
	int		min_index;

	min = 0;
	add_index(a);
	tmp = *a;
	while (tmp)
	{
		if(tmp->nbr < min)
		{
			min = tmp->nbr;
			min_index = tmp->index;
		}
		tmp = tmp->next;
	}
	rot_last(a, min_index);
}

void	rot_last(t_list **a, int index)
{
	int	lsize;
	int	i;
	int	j;

	lsize = ft_lstsize(*a) + 1;
	i = lsize - index;
	j = index - 1;
	if (i < j)
	{
		while (i > 0)
		{
			rra(a);
			i--;
		}
	}
	else
	{
		while (j > 0)
		{
			ra(a);
			j--;
		}
	}
}
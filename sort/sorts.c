/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:25:08 by mbraga-s          #+#    #+#             */
/*   Updated: 2023/11/03 19:24:05 by mbraga-s         ###   ########.fr       */
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
	printf("\n");
	print_list(*a, *b);
	printf("\n");
	sort_3(a);
	printf("\n");
	print_list(*a, *b);
	printf("\n");
	pa(a, b);
	printf("\n");
	sa(a);
	pb(a, b);
	sa(a);
	pa(a, b);
}

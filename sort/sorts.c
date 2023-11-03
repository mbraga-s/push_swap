/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:25:08 by mbraga-s          #+#    #+#             */
/*   Updated: 2023/11/03 19:14:05 by mbraga-s         ###   ########.fr       */
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

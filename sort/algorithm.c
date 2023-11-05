/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:01:02 by mbraga-s          #+#    #+#             */
/*   Updated: 2023/11/05 18:44:33 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	proto_sort(t_list **a, t_list **b)
{
	while (ft_lstsize(*a) > 5)
	{
		if ((*a)->nbr < average(a))
		{
			printf("nbr = %d\n", (*a)->nbr);
			printf("avg = %d\n", average(a));
			pb(a, b);
		}
		else
			ra(a);
	}
	sort_5(a, b);
}

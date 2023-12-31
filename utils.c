/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:28:34 by mbraga-s          #+#    #+#             */
/*   Updated: 2023/11/07 00:01:20 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	average(t_list **a)
{
	t_list	*tmp;
	long	sum;
	long	count;
	int		inbr;

	tmp = *a;
	sum = 0;
	count = 0;
	while (tmp)
	{
		sum = sum + tmp->nbr;
		count++;
		tmp = tmp->next;
	}
	inbr = (int)(sum / count);
	return (inbr);
}

int	check_sort(t_list **a)
{
	t_list	*temp;
	int		flag;

	flag = 1;
	temp = *a;
	while (temp->next)
	{
		if (temp->nbr > temp->next->nbr)
			flag = 0;
		temp = temp->next;
	}
	return (flag);
}

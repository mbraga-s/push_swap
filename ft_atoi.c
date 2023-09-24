/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:34:11 by mbraga-s          #+#    #+#             */
/*   Updated: 2023/09/18 17:19:36 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

long	ft_atoi(const char *nptr)
{
	size_t		i;
	size_t		sign;
	long		nbr;

	nbr = 0;
	i = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == 45)
	{
		sign = -1;
		i++;
	}
	while ((nptr[i] >= 48 && nptr[i] <= 57))
	{
		nbr = (10 * nbr) + (nptr[i] - 48);
		i++;
	}
	return (nbr * sign);
}

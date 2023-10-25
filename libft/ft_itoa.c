/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:23:02 by mbraga-s          #+#    #+#             */
/*   Updated: 2022/11/08 18:08:03 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_digits(long m)
{
	int	i;

	i = 1;
	if (m < 0)
	{
		m = m * -1;
		i++;
	}
	while (m > 9)
	{
		m = (m / 10);
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		digits;
	char	*ptr;
	long	m;

	m = n;
	digits = ft_digits(m);
	ptr = (char *)ft_calloc((digits + 1), 1);
	if (!ptr)
		return (NULL);
	if (m < 0)
	{
		m = m * -1;
		ptr[0] = '-';
	}
	if (m == 0)
		ptr[m] = '0';
	while (m > 0)
	{
		ptr[digits - 1] = (48 + (m % 10));
		m = (m / 10);
		digits--;
	}
	return (ptr);
}

/*  int	main(void)
{
	int		i = 0;
	int		j = INT_MIN;
	int		count;
	char	*ptr1;
	char	*ptr2;

	ptr1 = ft_itoa(i);
	ptr2 = ft_itoa(j);
	printf("Pos Number: %s\n", ptr1);
	count = ft_digits(j);
	printf("\nN of digits: %d", count);
	printf("\nNeg Number: %s\n", ptr2);
} */
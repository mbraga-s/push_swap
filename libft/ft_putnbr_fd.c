/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:48:00 by mbraga-s          #+#    #+#             */
/*   Updated: 2022/11/10 09:55:25 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (fd < 0)
		return ;
	if (n == INT_MIN)
	{
		write (fd, "-2", 2);
		n = 147483648;
	}
	if (n < 0)
	{
		write (fd, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd((n / 10), fd);
		n = n % 10;
	}
	if (n <= 9 && n >= 0)
	{
		c = (48 + n);
		write (fd, &c, 1);
	}
}

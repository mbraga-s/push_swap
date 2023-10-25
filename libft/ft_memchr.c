/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:16:05 by mbraga-s          #+#    #+#             */
/*   Updated: 2022/11/03 14:08:10 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n != 0)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((unsigned char *)s);
		s++;
		n--;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:54:30 by mbraga-s          #+#    #+#             */
/*   Updated: 2022/11/03 15:54:33 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp1;
	char	*temp2;

	temp1 = (char *)src;
	temp2 = (char *)dest;
	if (!dest && !src)
		return (NULL);
	if (temp1 < temp2)
	{
		while (n--)
		{
			temp2[n] = temp1[n];
		}
	}
	else
		ft_memcpy(temp2, temp1, n);
	return (dest);
}

/*int	main(void)
{
	char	a[] = "Ola maltinha, bem vindos ao meu canal.";
	char	*b;
	char	*c;
	char	*d;

	b = &a[14];
	d = (char *)malloc(7);
	printf("%s\n", b);
	c = ft_memmove(d, b, 10);
	printf("\nResult:\n%s", c);
}*/
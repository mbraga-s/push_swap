/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:24:07 by mbraga-s          #+#    #+#             */
/*   Updated: 2022/10/27 15:59:37 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n > 0 && i == 0)
	{
		i = (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
		n--;
	}
	return (i);
}

/*int	main(void)
{
	char	*a;
	char	*b;
	int		i;
	int		f;

	a = "iello";
	b = "Hello";
	i = ft_memcmp(a, b, 3);
	printf("\nft_memcmp result: %d\n", i);
	f = memcmp(a, b, 3);
	printf("memcmp result: %d\n", f);
}
*/
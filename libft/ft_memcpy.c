/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:01:10 by mbraga-s          #+#    #+#             */
/*   Updated: 2022/11/03 15:04:11 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (n > 0)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
		n--;
	}
	return (dest);
}

/*int	main(void)
{
	char	a[] = "Eu sou o A.";
	char	b[] = "Je suis B!";
	char	*c;
	
	printf("A = %s\n", a);
	printf("B = %s\n", b);
	c = ft_memcpy(a, b, 8);
	printf("\nResult:\n%s", c);
}*/
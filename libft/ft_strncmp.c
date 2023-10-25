/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:51:40 by mbraga-s          #+#    #+#             */
/*   Updated: 2022/11/03 14:40:25 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	ptr1;
	unsigned char	ptr2;
	size_t			i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)
		i++;
	if (i == n)
		i--;
	ptr1 = s1[i];
	ptr2 = s2[i];
	return (ptr1 - ptr2);
}

/*int	main(void)
{
	char	*a;
	char	*b;
	int		i;
	int		f;

	a = "Hillo";
	b = "Hello";
	i = ft_strncmp(a, b, 3);
	printf("\nft_strncmp result: %d\n", i);
	f = strncmp(a, b, 3);
	printf("strncmp result: %d\n", f);
}
*/
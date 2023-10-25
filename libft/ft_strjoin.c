/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:50:46 by mbraga-s          #+#    #+#             */
/*   Updated: 2022/11/07 14:50:46 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	i;
	size_t	j;
	char	*ptr;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	j = 0;
	ptr = (char *)malloc(len1 + len2 + 1);
	if (!ptr)
		return (NULL);
	while (i < len1)
	{
		ptr[i] = s1[i];
		i++;
	}
	while ((i + j) < (len1 + len2))
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}

/*int	main(void)
{
	char	*ptr1 = "Em teoria";
	char	*ptr2 = " esta a funcionar.";
	char	*ptr3;

	ptr3 = ft_strjoin(ptr1, ptr2);
	printf("\nptr1 = %s\n", ptr1);
	printf("ptr2 = %s\n", ptr2);
	printf("\nft_strjoin = %s\n", ptr3);
}*/
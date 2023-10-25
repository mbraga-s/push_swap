/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:05:31 by mbraga-s          #+#    #+#             */
/*   Updated: 2022/11/04 18:52:39 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ptr;
	char	*ptr1;

	if (start >= ft_strlen(s))
	{
		ptr = (char *)malloc(1);
		ptr[0] = '\0';
		return (ptr);
	}
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	ptr1 = &((char *)s)[start];
	ft_strlcpy(ptr, ptr1, len + 1);
	return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:43:59 by mbraga-s          #+#    #+#             */
/*   Updated: 2022/11/04 16:31:45 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = ft_strlen(dst);
	len = j;
	if (j < (size - 1) && size > 0)
	{
		while (src[i] && ((size - 1) > (j + i)))
		{
			dst[j + i] = src[i];
			i++;
		}
		dst[j + i] = '\0';
	}
	if (size <= len)
		len = size;
	return (len + ft_strlen(src));
}

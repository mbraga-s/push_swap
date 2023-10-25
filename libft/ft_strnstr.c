/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:42:44 by mbraga-s          #+#    #+#             */
/*   Updated: 2022/11/04 15:08:24 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*cbig;
	char	*clittle;

	i = 0;
	cbig = (char *)big;
	clittle = (char *)little;
	if (ft_strlen(clittle) == 0)
		return (cbig);
	while (cbig[i] && (len - i > 0))
	{
		j = 0;
		while ((cbig[i + j] == clittle[j]) && clittle[j] && (len - (i + j) > 0))
		{
			j++;
		}
		if (j == ft_strlen(clittle))
			return (&cbig[i]);
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:51:54 by mbraga-s          #+#    #+#             */
/*   Updated: 2022/11/08 18:14:59 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = ft_strdup(s);
	if (!ptr)
		return (NULL);
	while (ptr[i])
	{
		ptr[i] = f(i, ptr[i]);
		i++;
	}
	return (ptr);
}

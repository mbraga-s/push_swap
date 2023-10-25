/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:36:35 by mbraga-s          #+#    #+#             */
/*   Updated: 2022/11/03 17:28:48 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)s;
	i = ft_strlen(ptr) + 1;
	while (i--)
	{
		if (*(ptr) == (char)c)
		{
			return (ptr);
		}
		ptr++;
	}
	return (0);
}

/*int	main(void)
{
	const char	*ptr;
	char		*str;
	int			c;

	c = 'i';
	ptr = "Isto e muito fixe moco";
	str = ft_strchr(ptr, c);

	printf("%s", str);
}
*/
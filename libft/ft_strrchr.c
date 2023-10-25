/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:31:38 by mbraga-s          #+#    #+#             */
/*   Updated: 2022/11/03 17:27:22 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)s;
	i = ft_strlen(ptr) + 1;
	while (i--)
	{
		if (*(ptr + i) == (char)c)
			return (ptr + i);
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
	str = ft_strrchr(ptr, c);

	printf("%s", str);
}
*/
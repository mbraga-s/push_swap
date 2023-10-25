/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:34:57 by mbraga-s          #+#    #+#             */
/*   Updated: 2022/11/10 10:29:40 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wcount(char const *s, char c)
{
	int	i;
	int	flag;
	int	count;

	i = 0;
	count = 0;
	flag = 1;
	while (s[i])
	{
		if (s[i] == c)
			flag = 1;
		if (flag == 1 && s[i] != c)
		{
			count++;
			flag = 0;
		}
		i++;
	}
	return (count);
}

int	ft_wlen(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] != c && s[i])
	{
		i++;
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	ptr = (char **)ft_calloc(ft_wcount(s, c) + 1, sizeof(char *));
	if (!ptr)
		return (NULL);
	while (s[i] && (k < ft_wcount(s, c)))
	{
		while (s[i] == c)
			i++;
		j = ft_wlen(s, c, i);
		ptr[k] = ft_substr(s, i, j);
		k++;
		i = i + j;
	}
	return (ptr);
}

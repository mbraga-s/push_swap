/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:15:27 by mbraga-s          #+#    #+#             */
/*   Updated: 2023/11/03 18:22:44 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

t_list	*ft_lstnew(int n)
{
	t_list	*ptr;

	ptr = ft_calloc(1, sizeof(t_list));
	if (!ptr)
		return (NULL);
	ptr->nbr = n;
	ptr->next = NULL;
	return (ptr);
}

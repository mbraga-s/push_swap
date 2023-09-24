/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:08:13 by mbraga-s          #+#    #+#             */
/*   Updated: 2023/09/20 15:14:17 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	parsing(char **argv, int argc)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (argcheck(argv[i]))
			return (1);
		if (ft_atoi(argv[i]) < INT_MIN || ft_atoi(argv[i]) > INT_MAX)
			return (1);
		i++;
	}
	
	return (0);
}

int	argcheck(char *arg)
{
	int	i;

	i = 0;
	if (arg[0] == '-')
		i++;
	while (arg[i])
	{
		if (arg[i] < 48 || arg[i] > 57)
			return (1);
		i++;
	}
	return (0);
}

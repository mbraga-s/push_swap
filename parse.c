/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:08:13 by mbraga-s          #+#    #+#             */
/*   Updated: 2023/10/02 15:55:07 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	parsing(char **argv, int argc)
{
	if (check_number(argv))
		return (1);
	else if (check_range(argv))
		return (1);
	else if (check_dups(argv, argc))
		return (1);
	return (0);
}

int	check_dups(char **args, int nbr)
{
	int	i;
	int	j;

	i = 1;
	while (args[i])
	{
		j = i + 1;
		while (j < nbr)
		{
			if (ft_atoi(args[i]) == ft_atoi(args[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_range(char **args)
{
	int	i;

	i = 0;
	while (args[i])
	{
		if (ft_atoi(args[i]) < INT_MIN || ft_atoi(args[i]) > INT_MAX)
			return (1);
		i++;
	}
	return (0);
}

int	check_number(char **args)
{
	int	i;
	int	j;

	i = 1;
	while (args[i])
	{
		j = 0;
		if (args[i][0] == '-')
			j++;
		while (args[i][j])
		{
			if (args[i][j] < 48 || args[i][j] > 57)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

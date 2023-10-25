/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:13:26 by mbraga-s          #+#    #+#             */
/*   Updated: 2023/10/23 15:44:50 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int argc, char **argv)
{
	//t_list stack_a;

	if (parsing(argv, argc))
	{
		ft_putstr_fd("Mistake\n", 2);
		return (0);
	}
	printf("All good\n");
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:09:23 by mbraga-s          #+#    #+#             */
/*   Updated: 2023/10/02 16:17:42 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>


typedef struct s_list
{
	int				*nbr;
	struct s_list	*next;
	struct s_list	*prev;
	
}					t_list;

long	ft_atoi(const char *nptr);

//parse.cs

int		parsing(char **args, int count);

int		check_dups(char **args, int nbr);

int		check_range(char **args);

int		check_number(char **args);

#endif
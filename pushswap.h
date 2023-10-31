/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:09:23 by mbraga-s          #+#    #+#             */
/*   Updated: 2023/10/31 16:20:39 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <limits.h>

typedef struct s_list
{
	int				nbr;
	struct s_list	*next;
}					t_list;

//libft

long	ft_atoi(const char *nptr);

void	ft_lstadd_back(t_list **lst, t_list *new);

void	ft_putstr_fd(char *s, int fd);

t_list	*ft_lstnew(int n);

t_list	*ft_lstlast(t_list *lst);


//moves

void	rotate(t_list **lst);

void	ra(t_list **a);

void	rb(t_list **b);

//parse.c

int		parsing(char **args, int count);

int		check_dups(char **args, int nbr);

int		check_range(char **args);

int		check_number(char **args);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:09:23 by mbraga-s          #+#    #+#             */
/*   Updated: 2023/11/06 22:17:38 by mbraga-s         ###   ########.fr       */
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
	int				index;
	int				bff_index;
	int				cost;
	struct s_list	*next;
}				t_list;

//main

void	make_list(t_list **a, int argc, char **argv);

void	free_list(t_list **lst);

void	choose_sort(int args, t_list **a, t_list **b);

//sorts

void	sort_2(t_list **a);

void	sort_3(t_list **a);

void	sort_4(t_list **a, t_list **b);

void	sort_5(t_list **a, t_list **b);

void	repeated_moves(t_list **a, t_list **b);

//algorithm

void	best_friend(t_list **a, t_list **b);

void	algorithm(t_list **a, t_list **b);

void	add_cost(t_list *a, t_list *b);

int		cost_check(t_list **b);

//utils

void	add_index(t_list **lst);

int		average(t_list **a);

int		check_sort(t_list **a);

//libft

long	ft_atoi(const char *nptr);

void	ft_lstadd_back(t_list **lst, t_list *new);

void	ft_lstadd_front(t_list **lst, t_list *new);

t_list	*ft_lstnew(int n);

t_list	*ft_lstlast(t_list *lst);

int		ft_lstsize(t_list *lst);

void	ft_putstr_fd(char *s, int fd);

void	*ft_calloc(size_t nmemb, size_t size);

void	ft_bzero(void *s, size_t n);

//rot_top

void	rot_a(t_list **a, int bff_index);

void	rot_b(t_list **b, int index);

void	put_top(t_list **a, t_list **b);

void	final_rot(t_list **a);

void	rot_last(t_list **a, int index);

//moves

void	rotate(t_list **lst);

void	rrotate(t_list **lst);

void	push(t_list **dst, t_list **src);

void	swap(t_list **lst);

void	rra(t_list **a);

void	rrb(t_list **b);

void	rrr(t_list **a, t_list **b);

void	ra(t_list **a);

void	rb(t_list **b);

void	rr(t_list **a, t_list **b);

void	pa(t_list **a, t_list **b);

void	pb(t_list **a, t_list **b);

void	sa(t_list **a);

void	sb(t_list **b);

void	ss(t_list **a, t_list **b);

//parse.c

int		parsing(char **args, int count);

int		check_dups(char **args, int nbr);

int		check_range(char **args);

int		check_number(char **args);

#endif
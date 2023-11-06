/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:13:26 by mbraga-s          #+#    #+#             */
/*   Updated: 2023/11/06 17:14:18 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	make_list(t_list **a, int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_lstadd_back(a, ft_lstnew(ft_atoi(argv[i])));
		i++;
	}
}

void	free_list(t_list **lst)
{
	t_list	*n_node;

	if (!lst || !*lst)
		return ;
	while ((*lst != NULL))
	{
		n_node = (*lst)->next;
		free(*lst);
		*lst = n_node;
	}
}

void	choose_sort(int args, t_list **a, t_list **b)
{
	if (args == 3)
		sort_2(a);
	else if (args == 4)
		sort_3(a);
	else if (args == 5)
		sort_4(a, b);
	else if (args == 6)
		sort_5(a, b);
	else
		algorithm(a, b);
}

/* int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (0);
	if (!parsing(argv, argc))
	{
		make_list(&stack_a, argc, argv);
		if (check_sort(&stack_a))
		{
			free_list(&stack_a);
			return (0);
		}
		choose_sort(argc, &stack_a, &stack_b);
		free_list(&stack_a);
		free_list(&stack_b);
		return (0);
	}
	else
		ft_putstr_fd("Error\n", 2);
	return (0);
} */


int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (0);
	if (parsing(argv, argc))
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	make_list(&stack_a, argc, argv);
	if (check_sort(&stack_a))
	{
		free_list(&stack_a);
		return (0);
	}
	choose_sort(argc, &stack_a, &stack_b);
	free_list(&stack_a);
	free_list(&stack_b);
	return (0);
}

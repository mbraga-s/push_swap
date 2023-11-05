/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 13:22:13 by mbraga-s          #+#    #+#             */
/*   Updated: 2023/11/05 21:54:12 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	print_list(t_list *stack_a, t_list *stack_b)
{
	printf("\n");
	while (stack_a || stack_b)
	{
		if (stack_a)
		{
			printf("%d", stack_a->nbr);
			stack_a = stack_a->next;
		}
		else
			printf(" ");
		printf("  ||  ");
		if (stack_b)
		{
			printf("%d", stack_b->nbr);
			stack_b = stack_b->next;
		}
		else
			printf(" ");
		printf("\n");
	}
	printf("\n");
}

void	print_bff(t_list *stack_b)
{
	printf("\n B || BFFs\n");
	while (stack_b)
	{
		printf("%d", stack_b->nbr);
		printf("  ||  ");
		printf("%d", stack_b->bff_index);
		stack_b = stack_b->next;
		printf("\n");
	}
	printf("\n");
}

//Main for testing purposes

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (!parsing(argv, argc))
	{
		printf("Correct Input\n");
		make_list(&stack_a, argc, argv);
		//print_list(stack_a, stack_b);
		if (check_sort(&stack_a))
		{
			printf("List sorted\n");
			free_list(&stack_a);
			return (0);
		}
		proto_sort(&stack_a, &stack_b);
		print_list(stack_a, stack_b);
		//print_bff(stack_b);
		free_list(&stack_a);
		free_list(&stack_b);
		return (0);
	}
	else
		printf("Wrong Input\n");
	return (0);
}

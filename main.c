/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:13:26 by mbraga-s          #+#    #+#             */
/*   Updated: 2023/11/03 19:01:52 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	print_list(t_list *stack_a, t_list *stack_b)
{
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
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (!parsing(argv, argc))
	{
		printf("Correct Input\n\n");
		make_list(&stack_a, argc, argv);
		print_list(stack_a, stack_b);
		printf("\n");
		ra(&stack_a);
		printf("\n");
		print_list(stack_a, stack_b);
		printf("\n");
		pb(&stack_a, &stack_b);
		pb(&stack_a, &stack_b);
		printf("\n");
		print_list(stack_a, stack_b);
		printf("\n");
		sb(&stack_b);
		printf("\n");
		print_list(stack_a, stack_b);
		printf("\n");
		sa(&stack_a);
		printf("\n");
		print_list(stack_a, stack_b);
		printf("\n");
		pa(&stack_a, &stack_b);
		printf("\n");
		print_list(stack_a, stack_b);
		printf("\n");
		rra(&stack_a);
		printf("\n");
		print_list(stack_a, stack_b);
		return (0);
	}
	else
		printf("Wrong Input\n");
	return (0);
}

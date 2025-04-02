/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_distrib.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 12:41:35 by ascordil          #+#    #+#             */
/*   Updated: 2024/12/23 17:48:31 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	sort_distrib_split(char **numbers, int flag)
{
	int		list_length;
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = init_list();
	stack_b = init_list();
	init_stack(&stack_a, numbers, flag);
	list_length = len_list(stack_a);
	if (!is_sorted(stack_a))
	{
		if (list_length == 2)
			sort_two(&stack_a);
		if (list_length == 3)
			sort_three(&stack_a);
		else
			full_sort(&stack_a, &stack_b);
	}
	free_tab(numbers);
	free_list(&stack_a);
	return (1);
}

int	sort_distrib(char **numbers, int flag)
{
	int		list_length;
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = init_list();
	stack_b = init_list();
	init_stack(&stack_a, numbers, flag);
	list_length = len_list(stack_a);
	if (!is_sorted(stack_a))
	{
		if (list_length == 2)
			sort_two(&stack_a);
		if (list_length == 3)
			sort_three(&stack_a);
		else
			full_sort(&stack_a, &stack_b);
	}
	free_list(&stack_a);
	return (1);
}

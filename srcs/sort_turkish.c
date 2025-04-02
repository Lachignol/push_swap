/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_distrib.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 12:41:35 by ascordil          #+#    #+#             */
/*   Updated: 2024/12/19 13:04:21 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	push_2_element_in_b(t_list **stack_a, t_list **stack_b)
{	
	t_list	*current;

	current = *stack_a;
	while (current && len_list(*stack_b) != 2 && !(is_sorted(*stack_a)))
	{
		pb(stack_a, stack_b);
		current = *stack_a;
	}
	return (1);
}

int	optmize_double_mouvement(t_list **a, t_list **b, t_list *opti)
{
	if (opti->before_middle && opti->target->before_middle)
	{
		while (*a != opti && *b != opti->target)
			rr(a, b);
	}
	if (!(opti->before_middle) && !(opti->target->before_middle))
	{
		while (*a != opti && *b != opti->target)
			rrr(a, b);
	}
	return (1);
}

int	align_value_for_push_in_b(t_list **a, t_list **b, t_list *opti)
{
	while (*a != opti || *b != opti->target)
	{
		if (*a != opti)
		{
			if (opti->before_middle)
				ra(a);
			else
				rra(a);
		}
		if (*b != opti->target)
		{
			if (opti->target->before_middle)
				rb(b);
			else
				rrb(b);
		}
	}
	return (1);
}

int	align_value_for_push_in_a(t_list **a, t_list **b, t_list *opti)
{
	while (*b != opti || *a != opti->target)
	{
		if (*b != opti)
		{
			if (opti->before_middle)
				rb(b);
			else
				rrb(b);
		}
		if (*a != opti->target)
		{
			if (opti->target->before_middle)
				ra(a);
			else
				rra(a);
		}
	}
	return (1);
}

int	full_sort(t_list **stack_a, t_list **stack_b)
{
	if (is_sorted(*stack_a) && !*stack_b)
		return (1);
	push_2_element_in_b(stack_a, stack_b);
	push_all_element_in_b_while_a_equal_three_and_sort(stack_a, stack_b);
	push_all_element_in_a_and_little_sort(stack_a, stack_b);
	return (1);
}

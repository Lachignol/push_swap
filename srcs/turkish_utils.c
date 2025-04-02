/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_distrib.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 12:41:35 by ascordil          #+#    #+#             */
/*   Updated: 2024/12/20 13:02:00 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	final_sort(t_list **stack_a)
{
	t_list	*min;

	min = get_min(*stack_a);
	while (*stack_a != min)
	{
		if (min->before_middle)
			ra(stack_a);
		else
			rra(stack_a);
	}
	return (1);
}

int	push_all_element_in_b_while_a_equal_three_and_sort(t_list **a, t_list **b)
{	
	t_list	*optimus_prime;

	while (len_list(*a) != 3 && !(is_sorted(*a)))
	{
		reset_all_pos(a, b);
		set_target_value_min(*a, *b);
		nbr_operate_for_push_a(*a, *b);
		optimus_prime = get_optimal_element(*a);
		optmize_double_mouvement(a, b, optimus_prime);
		align_value_for_push_in_b(a, b, optimus_prime);
		pb(a, b);
	}
	reset_all_pos(a, b);
	sort_three(a);
	return (1);
}

int	push_all_element_in_a_and_little_sort(t_list **a, t_list **b)
{
	t_list	*optimus_prime;

	while (*b)
	{
		reset_all_pos(a, b);
		set_target_value_max(*a, *b);
		nbr_operate_for_push_a(*b, *a);
		optimus_prime = get_optimal_element(*b);
		optmize_double_mouvement(b, a, optimus_prime);
		align_value_for_push_in_a(a, b, optimus_prime);
		pa(b, a);
	}
	reset_all_pos(a, b);
	final_sort(a);
	return (1);
}

int	reset_all_pos(t_list **stack_a, t_list **stack_b)
{
	set_pos(stack_a);
	set_pos(stack_b);
	return (1);
}

int	polish_cost_dbl_mv_afmdl(t_list *stack_1, int length_1, int length_2)
{
	int	simulate_pos_initial;
	int	simulate_pos_target;
	int	simulate_double_mouvement;

	simulate_pos_initial = length_1 - stack_1->pos;
	simulate_pos_target = length_2 - stack_1->target->pos;
	simulate_double_mouvement = 0;
	while (simulate_pos_initial != 0 && simulate_pos_target != 0)
	{
		simulate_pos_target--;
		simulate_pos_initial--;
		simulate_double_mouvement++;
	}
	stack_1->push_operate -= simulate_double_mouvement * 2;
	stack_1->push_operate += simulate_double_mouvement;
	return (1);
}

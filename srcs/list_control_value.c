/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:08:10 by ascordil          #+#    #+#             */
/*   Updated: 2024/12/20 13:02:04 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	set_target_value_min(t_list *stack_a, t_list *stack_b)
{
	t_list	*target_element;
	t_list	*current_b;
	int		temp_value;

	while (stack_a)
	{
		temp_value = INT_MIN;
		current_b = stack_b;
		while (current_b)
		{
			if (stack_a->value > current_b->value
				&& current_b->value > temp_value)
			{
				temp_value = current_b->value;
				target_element = current_b;
			}
			current_b = current_b->next;
		}
		if (temp_value == INT_MIN)
			stack_a->target = get_max(stack_b);
		else
			stack_a->target = target_element;
		stack_a = stack_a->next;
	}
	return (1);
}

int	set_target_value_max(t_list *stack_a, t_list *stack_b)
{
	t_list	*target_element;
	t_list	*current_a;
	int		temp_value;

	while (stack_b)
	{
		temp_value = INT_MAX;
		current_a = stack_a;
		while (current_a)
		{
			if (stack_b->value < current_a->value
				&& current_a->value < temp_value)
			{
				temp_value = current_a->value;
				target_element = current_a;
			}
			current_a = current_a->next;
		}
		if (temp_value == INT_MAX)
			stack_b->target = get_min(stack_a);
		else
			stack_b->target = target_element;
		stack_b = stack_b->next;
	}
	return (1);
}

int	polish_cost_dbl_mv_bfmdl(t_list *stack_1)
{
	int	simulate_pos_initial;
	int	simulate_pos_target;
	int	simulate_double_mouvement;

	simulate_pos_initial = stack_1->pos;
	simulate_pos_target = stack_1->target->pos;
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

int	nbr_operate_for_push_a(t_list *stack_1, t_list *stack_2)
{
	int	length_1;
	int	length_2;

	length_1 = len_list(stack_1);
	length_2 = len_list(stack_2);
	while (stack_1)
	{
		if (stack_1->before_middle)
			stack_1->push_operate = stack_1->pos;
		else
			stack_1->push_operate = length_1 - stack_1->pos;
		if (stack_1->target->before_middle)
			stack_1->push_operate += stack_1->target->pos;
		else
			stack_1->push_operate += length_2 - stack_1->target->pos;
		if (stack_1->before_middle && stack_1->target->before_middle)
			polish_cost_dbl_mv_bfmdl(stack_1);
		if (!(stack_1->before_middle) && !(stack_1->target->before_middle))
			polish_cost_dbl_mv_afmdl(stack_1, length_1, length_2);
		stack_1 = stack_1->next;
	}
	return (1);
}

t_list	*get_optimal_element(t_list *stack)
{
	t_list	*optimal_element;
	int		opti_value;

	opti_value = INT_MAX;
	while (stack)
	{
		if (stack->push_operate < opti_value)
		{
			opti_value = stack->push_operate;
			optimal_element = stack;
		}
		stack = stack->next;
	}
	return (optimal_element);
}

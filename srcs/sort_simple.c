/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_distrib.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 12:41:35 by ascordil          #+#    #+#             */
/*   Updated: 2024/12/19 12:32:43 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	sort_two(t_list **stack)
{
	sa(stack);
	return (1);
}

int	sort_three(t_list **stack)
{
	int	second;
	int	third;

	if (!stack || !(*stack) || !(*stack)->next || !(*stack)->next->next)
		return (0);
	second = (*stack)->next->value;
	third = (*stack)->next->next->value;
	if ((*stack)->value < third && second > third)
	{
		rra(stack);
		sa(stack);
	}
	if ((*stack)->value > second && (*stack)->value < third)
		sa(stack);
	if ((*stack)->value < second && (*stack)->value > third)
		rra(stack);
	if ((*stack)->value > third && second < third)
		ra(stack);
	if ((*stack)->value > second && second > third)
	{
		ra(stack);
		sa(stack);
	}
	return (1);
}

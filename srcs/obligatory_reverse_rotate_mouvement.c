/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_for_algo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:53:44 by ascordil          #+#    #+#             */
/*   Updated: 2024/12/12 20:06:42 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_list **stack_a)
{
	reverse_rotate(stack_a);
	ft_printf("rra\n");
}

void	rrb(t_list **stack_b)
{
	reverse_rotate(stack_b);
	ft_printf("rrb\n");
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_printf("rrr\n");
}

/*
rra (reverse rotate a) : Décale d’une position vers le bas
tous les élements de
la pile a. Le dernier élément devient le premier.
rrb (reverse rotate b) : Décale d’une position vers le bas
tous les élements de
la pile b. Le dernier élément devient le premier.
rrr : rra et rrb en même temps.

*/

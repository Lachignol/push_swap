/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_for_algo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:53:44 by ascordil          #+#    #+#             */
/*   Updated: 2024/12/12 16:55:34 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_list **stack_a)
{
	rotate(stack_a);
	ft_printf("ra\n");
}

void	rb(t_list **stack_b)
{
	rotate(stack_b);
	ft_printf("rb\n");
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_printf("rr\n");
}
/*
ra (rotate a) : Décale d’une position vers le haut 
tous les élements de la pile a.
Le premier élément devient le dernier.
rb (rotate b) : Décale d’une position vers le haut 
tous les élements de la pile b.
Le premier élément devient le dernier.
rr : ra et rb en même temps.
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_for_algo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:53:44 by ascordil          #+#    #+#             */
/*   Updated: 2024/12/13 19:10:33 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_list **stack_a)
{
	swap(stack_a);
	ft_printf("sa\n");
}

void	sb(t_list **stack_b)
{
	swap(stack_b);
	ft_printf("sb\n");
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
}

//sa (swap a) : Intervertit les 2 premiers éléments 
//au sommet de la pile a.
//Ne fait rien s’il n’y en a qu’un ou aucun.

//sb (swap b ) : Intervertit les 2 premiers éléments 
//au sommet de la pile b.
//Ne fait rien s’il n’y en a qu’un ou aucun.
//ss : sa et sb en même temps.

void	pa(t_list	**stack_b, t_list **stack_a)
{
	push(stack_b, stack_a);
	ft_printf("pa\n");
}

void	pb(t_list	**stack_a, t_list **stack_b)
{
	push(stack_a, stack_b);
	ft_printf("pb\n");
}

/*
//pa (push a) : Prend le premier élément au sommet de b 
//et le met sur a.
//Ne fait rien si b est vide.
//pb (push b) : Prend le premier élément au sommet de a 
//et le met sur b.
//Ne fait rien si a est vide.
*/

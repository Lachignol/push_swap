/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_for_algo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:53:44 by ascordil          #+#    #+#             */
/*   Updated: 2024/12/12 19:08:55 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	swap(t_list **list)
{
	t_list	*first;
	t_list	*second;

	if (*list == NULL || (*list)->next == NULL)
		return (-1);
	first = *list;
	second = first->next;
	first->next = second->next;
	second->next = first;
	first->prev = second;
	*list = second;
	if (first->next != NULL)
		first->next->prev = first;
	second->prev = NULL;
	return (0);
}

int	push(t_list **src, t_list **dest)
{
	t_list	*first_src;

	if (*src == NULL)
		return (-1);
	first_src = *src;
	if (first_src->next)
	{
		*src = first_src->next;
		(*src)->prev = NULL;
	}
	else
		*src = NULL;
	if (*dest == NULL)
	{
		first_src->prev = NULL;
		first_src->next = NULL;
		*dest = first_src;
	}
	else
	{
		(*dest)->prev = first_src;
		first_src->next = *dest;
		*dest = first_src;
	}
	return (0);
}

int	rotate(t_list **list)
{
	t_list	*last;
	t_list	*second;
	t_list	*first;

	if (*list == NULL || (*list)->next == NULL)
		return (-1);
	first = *list;
	second = (*list)->next;
	second->prev = NULL;
	last = *list;
	while (last->next != NULL)
		last = last->next;
	*list = second;
	first->next = NULL;
	first->prev = last;
	last->next = first;
	return (1);
}

int	reverse_rotate(t_list **list)
{
	t_list	*last;
	t_list	*previouslast;
	t_list	*first;

	if (*list == NULL || (*list)->next == NULL)
		return (-1);
	first = *list;
	previouslast = NULL;
	last = *list;
	while (last->next != NULL)
	{
		previouslast = last;
		last = last->next;
	}
	last->prev = NULL;
	*list = last;
	first->prev = last;
	(*list)->next = first;
	previouslast->next = NULL;
	return (1);
}

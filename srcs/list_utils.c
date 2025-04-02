/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:08:10 by ascordil          #+#    #+#             */
/*   Updated: 2024/12/19 12:19:41 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	len_list(t_list *list)
{
	int		i;
	t_list	*temp;

	i = 0;
	temp = list;
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

t_list	*get_max(t_list *list)
{
	t_list	*temp;
	t_list	*max_element;
	int		max;

	temp = list;
	max = INT_MIN;
	while (temp)
	{
		if (temp->value >= max)
		{
			max = temp->value;
			max_element = temp;
		}
		temp = temp->next;
	}
	return (max_element);
}

t_list	*get_min(t_list *list)
{
	t_list	*temp;
	t_list	*min_element;
	int		min;

	temp = list;
	min = INT_MAX;
	while (temp)
	{
		if (temp->value <= min)
		{
			min = temp->value;
			min_element = temp;
		}
		temp = temp->next;
	}
	return (min_element);
}

/*
int	index_list(t_list **list)
{
	int		size;
	int		min;
	t_list	*temp;
	t_list	*current;

	size = len_list(*list);
	temp = NULL;
	while (size)
	{
		current = *list;
		min = INT_MIN;
		while (current)
		{
			if (current->index == 0 && current->value >= min)
			{
				min = current->value;
				temp = current;
			}
			current = current->next;
		}
		if (temp)
		{
			temp->index = size;
			size--;
		}
		else
			break ;
	}
	return (0);
}
*/
int	set_pos(t_list **list)
{
	int		pos;
	int		middle_line;
	t_list	*current;

	if (!*list)
		return (0);
	middle_line = len_list(*list) / 2;
	pos = 0;
	current = *list;
	while (current)
	{
		if (pos < middle_line)
			current->before_middle = 1;
		else
			current->before_middle = 0;
		current->pos = pos;
		current = current->next;
		pos++;
	}
	return (1);
}

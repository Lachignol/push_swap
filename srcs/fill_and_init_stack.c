/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_and_init_stack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:07:04 by ascordil          #+#    #+#             */
/*   Updated: 2024/12/19 10:57:43 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*init_node(int number)
{
	t_list	*new_element;

	new_element = malloc(sizeof(*new_element));
	if (!new_element)
		return (NULL);
	new_element->value = number;
	new_element->before_middle = -1;
	new_element->target = NULL;
	new_element->pos = -1;
	new_element->index = 0;
	return (new_element);
}

int	add_to_front_list(t_list **list, void *number)
{
	t_list	*new_element;
	int		nbr;

	nbr = ft_atoi(number);
	new_element = init_node(nbr);
	if (!new_element)
		return (-1);
	if (*list == NULL)
	{
		new_element->prev = NULL;
		new_element->next = NULL;
		*list = new_element;
	}
	else
	{
		new_element->prev = NULL;
		new_element->next = *list;
		(*list)->prev = new_element;
		*list = new_element;
	}
	return (1);
}

int	add_to_back_list(t_list **list, void *number)
{
	t_list	*new_element;
	t_list	*last;
	int		nbr;

	nbr = ft_atoi(number);
	last = *list;
	new_element = init_node(nbr);
	if (!new_element)
		return (-1);
	if (*list == NULL)
	{
		new_element->prev = NULL;
		*list = new_element;
		return (1);
	}
	while (last->next != NULL)
		last = last->next;
	new_element->prev = last;
	last->next = new_element;
	return (1);
}

int	init_stack(t_list **stack, char	**numbers, int count)
{
	int		i;
	int		j;

	i = 0;
	j = count;
	if (count == -1)
	{
		j = 0;
		while (numbers[j])
			j++;
		while (i <= j - 1)
		{
			add_to_front_list(stack, numbers[j - 1 - i]);
			i++;
		}
	}
	else
	{
		while (i < j - 1)
		{
			add_to_front_list(stack, numbers[j - 1 - i]);
			i++;
		}
	}
	return (1);
}

t_list	*init_list(void)
{
	return (NULL);
}

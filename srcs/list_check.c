/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:08:10 by ascordil          #+#    #+#             */
/*   Updated: 2024/12/18 21:33:11 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_sorted(t_list *list)
{
	t_list	*temp;

	temp = list;
	while (temp)
	{
		if ((temp->next) && (temp->value >= temp->next->value))
			return (0);
		temp = temp->next;
	}
	return (1);
}

int	free_list(t_list **list)
{	
	t_list	*temp;

	if (!*list)
		return (0);
	while (*list)
	{
		temp = *list;
		*list = temp->next;
		free(temp);
	}
	*list = NULL;
	return (1);
}

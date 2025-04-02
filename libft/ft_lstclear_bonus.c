/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 22:15:13 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/15 23:32:06 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*));

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current_element;
	t_list	*next_element;

	if (!*lst)
		lst = NULL;
	else
	{
		current_element = *lst;
		while (current_element)
		{
			next_element = current_element->next;
			(del)(current_element->content);
			free(current_element);
			current_element = next_element;
		}
		*lst = NULL;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 21:33:17 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/15 22:02:25 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new);

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastelement;	

	if (!*lst)
		*lst = new;
	else
	{
		lastelement = ft_lstlast(*lst);
		lastelement->next = new;
	}
}

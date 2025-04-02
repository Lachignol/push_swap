/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <ascordil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:47:01 by ascordil          #+#    #+#             */
/*   Updated: 2024/12/24 16:37:27 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	handle_error(char **numbers)
{
	if (numbers)
		free_tab(numbers);
	write(2, "Error\n", 7);
}

void	free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}	

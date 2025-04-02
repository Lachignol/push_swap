/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <ascordil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 11:35:53 by ascordil          #+#    #+#             */
/*   Updated: 2024/12/24 17:01:07 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int count, char	**args)
{
	char	**numbers;

	numbers = NULL;
	if (count == 1)
		return (0);
	if (count == 2 && *args[1])
	{
		numbers = ft_split(args[1], ' ');
		if (!numbers)
			return (-1);
		if (check_integrity(numbers, 0, args[1]))
			sort_distrib_split(numbers, -1);
		else
			handle_error(numbers);
	}
	else if (count > 2)
	{
		if (check_integrity(args, 1, NULL))
			sort_distrib(args, count);
		else
			handle_error(numbers);
	}
	return (0);
}

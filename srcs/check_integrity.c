/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_integrity.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 19:07:31 by ascordil          #+#    #+#             */
/*   Updated: 2024/12/24 17:01:10 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_is_in_intrange(char *number)
{
	int		nbr;
	int		error;

	error = 0;
	nbr = rtrn_int_and_cntrl(number, &error);
	if (error)
		return (0);
	return (1);
}

int	check_no_doublon(char **numbers, int number, int idx)
{
	int	i;

	i = idx;
	while (numbers[i])
	{
		if (ft_atoi(numbers[i]) == number)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_number(char *c)
{
	int	i;

	i = 0;
	if (c[i] == '+' || c[i] == '-')
		i++;
	while (c[i])
	{
		if (!(c[i] >= '0' && c[i] <= '9'))
			return (0);
		i++;
	}
	if (c[i] != '\0')
		return (0);
	return (1);
}

int	check_integrity(char **numbers, int flag, char *arg1)
{
	int	i;

	i = 0;
	if (flag)
		i = 1;
	if (arg1)
	{
		if (is_only_spc(arg1))
			return (0);
	}
	while (numbers[i])
	{
		if (!(ft_is_number(numbers[i])))
			return (0);
		if (!ft_is_in_intrange(numbers[i]))
			return (0);
		if (!check_no_doublon(numbers, ft_atoi(numbers[i]), i + 1))
			return (0);
		i++;
	}
	return (1);
}

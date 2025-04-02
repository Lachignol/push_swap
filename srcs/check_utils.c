/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_utilis.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 11:47:49 by ascordil          #+#    #+#             */
/*   Updated: 2024/12/24 16:06:43 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	rtrn_int_and_cntrl(const char *Str, int *error)
{
	int		signe;
	long	result;

	signe = 1;
	result = 0;
	if (*Str == '-' || *Str == '+')
	{
		if (*Str == '-')
			signe *= -1;
		Str++;
	}
	while (*Str >= '0' && *Str <= '9')
	{
		result *= 10;
		result += *Str - '0';
		if ((result * signe) < INT_MIN || (result * signe) > INT_MAX)
			return (*error = 1, 0);
		Str++;
	}
	if (*Str != '\0')
		return (*error = 1, 0);
	return ((int)(result * signe));
}

int	is_only_spc(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

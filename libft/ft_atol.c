/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:37:11 by ascordil          #+#    #+#             */
/*   Updated: 2024/12/12 12:39:42 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	ft_atol(const char *theString );

static	int	white_space(char str)
{
	if (str == '\t' || str == '\n' || str == '\v'
		|| str == '\f' || str == '\r' || str == ' ' )
		return (1);
	else
		return (0);
}

long	ft_atol(const char *theString )
{
	long	signe;
	long	result;

	signe = 1;
	result = 0;
	while (white_space(*theString))
		theString++;
	if (*theString == '-' || *theString == '+')
	{
		if (*theString == '-')
			signe *= -1;
		theString++;
	}
	while (*theString >= '0' && *theString <= '9')
	{
		result *= 10;
		result += *theString - '0';
		theString++;
	}
	return (result * signe);
}

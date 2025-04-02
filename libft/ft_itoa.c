/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:22:49 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/14 20:26:57 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_itoa(int n);
static	int	nbr_digit(int n);

static	int	nbr_digit(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	if (n == 0)
		count++;
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		digit_nbr;
	long	nb;

	nb = n;
	digit_nbr = nbr_digit(n);
	result = malloc(sizeof(char) * (digit_nbr + 1));
	if (!result)
		return (NULL);
	result[digit_nbr] = '\0';
	if (nb == 0)
		*result = '0';
	if (nb < 0)
	{
		nb *= -1;
		*result = '-';
	}
	while (nb)
	{
		result[--digit_nbr] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (result);
}

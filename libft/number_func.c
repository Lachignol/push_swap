/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_func.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <ascordil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:44:49 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/21 13:54:07 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int nb)
{
	int		count;
	long	nbr;
	long	a;	
	long	c;

	nbr = nb;
	count = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		count++;
		nbr *= -1;
	}
	if (nbr >= 10)
	{
		a = nbr / 10;
		count += ft_putnbr(a);
	}
	c = nbr % 10 + '0';
	write(1, &c, 1);
	count++;
	return (count);
}

int	ft_putnbr_unsigned(unsigned int nb)
{
	long	nbr;
	long	a;	
	long	c;
	int		count;

	nbr = nb;
	count = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		count++;
		nbr *= -1;
	}
	if (nbr >= 10)
	{
		a = nbr / 10;
		count += ft_putnbr(a);
	}
	c = nbr % 10 + '0';
	write(1, &c, 1);
	count++;
	return (count);
}

int	ft_putnbrhex(unsigned int nb, char *base)
{
	unsigned int	nbr;
	int				count;

	count = 0;
	nbr = nb;
	if (nbr >= 16)
		count += ft_putnbrhex(nbr / 16, base);
	write(1, &base[nbr % 16], 1);
	count++;
	return (count);
}

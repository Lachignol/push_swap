/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_func.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:08:12 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/21 14:07:20 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	handle_ptr(va_list *li)
{
	int					count;
	unsigned long		adress;

	count = 0;
	adress = (unsigned long)va_arg(*li, unsigned long);
	if (!adress)
		return (count += write(1, "(nil)", 5), count);
	else
	{
		count += write(1, "0x", 2);
		count += ft_putnbr_ptr_hex(adress, _BHMIN_);
	}	
	return (count);
}

int	ft_putnbr_ptr_hex(unsigned long nb, char *base)
{
	int					count;
	unsigned long		nbr;

	count = 0;
	nbr = nb;
	if (nbr >= 16)
		count += ft_putnbr_ptr_hex(nbr / 16, base);
	write(1, &base[nbr % 16], 1);
	count++;
	return (count);
}

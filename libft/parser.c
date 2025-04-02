/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <ascordil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:41:22 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/21 14:06:55 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	format_parser(char letter, va_list *li)
{
	int	count;

	count = 0;
	if (letter == 'd' || letter == 'i')
		count += ft_putnbr((int)va_arg(*li, int));
	else if (letter == 'u')
		count += ft_putnbr_unsigned((unsigned int)va_arg(*li, unsigned int));
	else if (letter == 's')
		count += ft_putstr((char *)va_arg(*li, char *));
	else if (letter == 'c')
		count += ft_putchar((char)va_arg(*li, int));
	else if (letter == '%')
		count += write(1, "%", 1);
	else if (letter == 'p')
		count += handle_ptr(li);
	else if (letter == 'x')
		count += ft_putnbrhex((unsigned int)va_arg(*li, unsigned int), _BHMIN_);
	else if (letter == 'X')
		count += ft_putnbrhex((unsigned int)va_arg(*li, unsigned int), _BHMAJ_);
	return (count);
}

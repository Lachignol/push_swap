/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <ascordil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:51:44 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/21 14:00:45 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *format, ...)
{
	va_list	li;
	int		count;

	count = 0;
	va_start(li, format);
	if (format == NULL)
		return (-1);
	while (*format)
	{
		while ((*format) && (*format != '%'))
		{
			count += write(1, format, 1);
			format++;
		}
		if (*format == '%')
		{
			format++;
			count += format_parser(*format, &li);
			format++;
		}
	}
	va_end(li);
	return (count);
}

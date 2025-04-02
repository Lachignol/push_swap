/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_func.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <ascordil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:47:21 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/21 13:41:39 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr(char *str)
{
	char	*ptr;

	ptr = str;
	if (str == NULL)
		return (write(1, "(null)", 6));
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	return (str - ptr);
}

int	ft_putchar(char letter)
{
	return (write(1, &letter, 1));
}

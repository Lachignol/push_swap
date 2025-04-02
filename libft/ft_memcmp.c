/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:11:25 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/13 01:03:14 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t len);

int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	unsigned const char	*byte1;
	unsigned const char	*byte2;
	size_t				i;

	byte1 = (unsigned const char *)b1;
	byte2 = (unsigned const char *)b2;
	i = 0;
	while (i < len)
	{
		if (!(byte1[i] == byte2[i]))
			return (byte1[i] - byte2[i]);
		i++;
	}
	return (0);
}

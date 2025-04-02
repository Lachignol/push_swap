/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:36:17 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/15 17:06:54 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len);

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	unsigned const char	*source;
	size_t				i;

	dest = (unsigned char *)dst;
	source = (unsigned const char *)src;
	if (!src && !dst)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}

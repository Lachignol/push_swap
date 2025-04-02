/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:59:06 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/12 20:31:45 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len);

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char			*dest;
	unsigned const char		*source;
	size_t					i;

	dest = (unsigned char *)dst;
	source = (unsigned const char *)src;
	i = 0;
	if (dest == source)
		return (dst);
	if (source < dest)
	{	
		while (len--)
			dest[len] = source[len];
	}
	if (source > dest)
	{
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	}
	return (dst);
}

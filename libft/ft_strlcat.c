/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:49:27 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/12 15:09:46 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_fill_len;
	size_t	src_len;
	size_t	i;

	dst_fill_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dst_fill_len)
		return (dstsize + src_len);
	i = 0;
	while ((i < dstsize - dst_fill_len - 1) && (src[i]))
	{
		dst[dst_fill_len + i] = src[i];
		i++;
	}
	dst[dst_fill_len + i] = '\0';
	return (dst_fill_len + src_len);
}

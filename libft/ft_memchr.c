/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:58:21 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/12 20:30:53 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len);

void	*ft_memchr(const void *b, int c, size_t len)
{
	size_t					i;
	unsigned char			searched;
	unsigned const char		*string;

	searched = (unsigned char )c;
	string = (unsigned const char *)b;
	i = 0;
	while (i < len)
	{
		if (string[i] == searched)
			return ((void *)&b[i]);
		i++;
	}
	return (NULL);
}

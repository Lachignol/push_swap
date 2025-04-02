/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 20:41:02 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/12 15:06:26 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num);

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t			i;
	unsigned char	v;
	unsigned char	*pt;

	i = 0;
	v = (unsigned char)value;
	pt = ptr;
	while (i < num)
	{
		pt[i] = v;
		i++;
	}
	return (ptr);
}

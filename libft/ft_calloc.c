/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <ascordil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:10:05 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/19 19:54:26 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdlib.h>

void	*ft_calloc(size_t number, size_t size);

void	*ft_calloc(size_t number, size_t size)
{
	unsigned char	*result;
	size_t			i;
	size_t			total_size;

	i = 0;
	result = NULL;
	total_size = number * size;
	result = malloc(total_size);
	if (!result)
		return (NULL);
	while (i < total_size)
	{
		result[i] = 0;
		i++;
	}
	return (result);
}

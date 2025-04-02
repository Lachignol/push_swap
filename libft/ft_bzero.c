/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:24:11 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/12 15:43:54 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t len);

void	ft_bzero(void *b, size_t len)
{
	char	*str;
	size_t	i;

	str = b;
	i = 0;
	if (len == 0)
		return ;
	while (i < len)
	{
		*str = 0;
		str++;
		i++;
	}
}

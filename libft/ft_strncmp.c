/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:45:24 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/11 16:47:40 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t length);

int	ft_strncmp(const char *first, const char *second, size_t length)
{
	size_t	i;

	i = 0;
	while ((first[i] || second[i]) && (i < length))
	{
		if (!(first[i]) || !(second[i]) || !(first[i] == second[i]))
			return ((unsigned char)first[i] - (unsigned char)second[i]);
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 23:52:38 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/13 00:45:14 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_size;
	size_t	i;
	size_t	j;
	char	*result;

	i = -1;
	j = -1;
	if (!(s1) || !(s2))
		return (NULL);
	total_size = ft_strlen(s1) + ft_strlen(s2);
	result = malloc(sizeof(char) * (total_size + 1));
	if (!result)
		return (NULL);
	while (j++, i++, s1[j])
		result[i] = s1[j];
	j = -1;
	i--;
	while (i++, j++, s2[j])
		result[i] = s2[j];
	result[i] = '\0';
	return (result);
}

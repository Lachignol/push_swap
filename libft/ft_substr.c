/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 21:02:14 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/13 00:47:24 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	j;
	char			*result;
	size_t			stringlen;

	j = 0;
	if (!s)
		return (NULL);
	stringlen = ft_strlen(s);
	if (start >= stringlen)
		return (ft_strdup(""));
	if (start + len > stringlen)
		len = stringlen - start;
	result = malloc(sizeof(char) * len + 1);
	if (!result)
		return (NULL);
	while (j < len)
	{
		result[j] = s[start + j];
		j++;
	}
	result[j] = '\0';
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:48:13 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/12 20:38:37 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>

char	*ft_strdup(const char *str);

char	*ft_strdup(const char *str)
{
	int				i;
	int				size_str;
	unsigned char	*result;

	i = 0;
	size_str = ft_strlen(str);
	result = malloc((sizeof(char) * size_str) + 1);
	if (!result)
		return (NULL);
	while (str[i])
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return ((char *)result);
}

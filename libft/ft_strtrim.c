/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 01:16:58 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/13 19:34:05 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	size_t	end;
	size_t	start;
	char	*result;

	start = 0;
	if ((!s1) || (!set))
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (start < end && ft_strrchr(set, s1[end - 1]))
		end--;
	size = end - start;
	result = malloc(sizeof(char) * (size + 1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, &s1[start], size + 1);
	return (result);
}

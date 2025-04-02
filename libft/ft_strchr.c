/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:37:38 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/12 18:40:17 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int searchedChar)
{
	if ((char)searchedChar == '\0')
		return ((char *)&string[ft_strlen(string)]);
	while (*string)
	{	
		if (*string == (char)searchedChar)
			return ((char *)string);
		string++;
	}
	return (NULL);
}

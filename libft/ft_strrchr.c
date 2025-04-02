/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:23:01 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/15 19:42:56 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int searchedChar)
{	
	int		i;
	char	*last_ocurr;

	i = 0;
	last_ocurr = NULL;
	if ((char)searchedChar == '\0')
		return ((char *)&string[ft_strlen(string)]);
	i = ft_strlen(string) - 1;
	while (i >= 0)
	{	
		if (string[i] == (char)searchedChar)
			return ((char *)&string[i]);
		i--;
	}
	return (NULL);
}

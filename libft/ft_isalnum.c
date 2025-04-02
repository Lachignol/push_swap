/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:25:15 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/11 15:57:28 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalnum(int character);

int	ft_isalnum(int character)
{
	if ((character >= '0' && character <= '9')
		|| ((character >= 'a' && character <= 'z')
			|| (character >= 'A' && character <= 'Z')))
		return (1);
	return (0);
}

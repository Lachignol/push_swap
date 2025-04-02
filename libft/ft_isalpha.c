/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:24:44 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/08 12:35:23 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c);

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
int main(int count, char **argv)
{
	char    c;

	if (count == 2)
	{ 
	c = argv[1][0];
	if (ft_isalpha(c))
		printf("Is alpha");
	else
		printf("Is not alpha");
	}
}
*/

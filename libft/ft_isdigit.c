/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:42:13 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/08 11:29:20 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

int	ft_isdigit(int c);

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int main(void)
{
	char    c;

		c = '2';
		if (ft_isdigit(c))
			printf("Is digit");
		else
			printf("Is not digit");
}
*/

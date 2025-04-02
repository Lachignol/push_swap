/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:23:33 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/19 15:57:31 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd);

void	ft_putstr_fd(char *s, int fd)
{
	if (fd < 0)
		return ;
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}

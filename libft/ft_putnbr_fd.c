/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:35:11 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/19 15:57:19 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "unistd.h"

void	ft_putnbr_fd(int n, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	long	a;
	char	b;
	char	c;

	nb = n;
	if (fd < 0)
		return ;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
	{
		a = nb / 10;
		b = nb % 10 + '0';
		ft_putnbr_fd(a, fd);
		write(fd, &b, 1);
	}
	else
	{	
		c = nb + '0';
		write(fd, &c, 1);
	}
}

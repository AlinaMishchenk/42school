/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almishch <almishch@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:56:20 by almishch          #+#    #+#             */
/*   Updated: 2024/08/05 15:27:32 by almishch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//nb = n; prisvaevaem znachenie
//if (nb < 0) obrabotka otrizatelnih chisel
//write(fd, "-", 1);vivod znaka minus
//nb = -nb;preobrazovanie otrizatelnogo chisla v polozhitelnoe

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd((nb % 10) + '0', fd);
	}
	else
		ft_putchar_fd(nb + '0', fd);
}

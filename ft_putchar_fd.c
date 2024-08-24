/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almishch <almishch@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:32:19 by almishch          #+#    #+#             */
/*   Updated: 2024/08/05 14:38:11 by almishch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//vivod symbol v ukazanniy file descreptor (upravlyat kuda otpravit dannie)
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

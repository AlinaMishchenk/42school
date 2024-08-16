/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almishch <almishch@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 16:23:46 by almishch          #+#    #+#             */
/*   Updated: 2024/08/01 16:27:14 by almishch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Sets the first n bytes of the memory pointed to by s to zero.
// It iterates through the memory block by decrementing n, 
// and for each iteration
// it assigns the value 0 to the current byte pointed to by s

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n--)
		*(unsigned char *)s++ = 0;
}

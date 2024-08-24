/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almishch <almishch@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 18:46:12 by almishch          #+#    #+#             */
/*   Updated: 2024/08/16 16:43:05 by almishch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//Allocates memory for an array of elements with a specified count and n size.
//It checks for overflow, allocates memory using malloc,
//and zeroes out the memory before returning the pointer to the allocated memory

#include "libft.h"

static void	s_zero(void *s, size_t n)
{
	while (n--)
		*(unsigned char *)s++ = 0;
}

void	*ft_calloc(size_t count, size_t n)
{
	void	*memory;

	if (n != 0 && count > (UINT_MAX / n))
		return (NULL);
	memory = malloc(count * n);
	if (!memory)
		return (NULL);
	s_zero(memory, count * n);
	return (memory);
}
/*#include <stdio.h>

int	main(void)
{
	char *a;
	a = (char *)ft_calloc(1,1);
	printf("%c", *a);
}*/

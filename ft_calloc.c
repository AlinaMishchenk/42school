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

/*int	main(void)
{
	int	*arr;

	arr = NULL;
	arr = (int *)ft_calloc(0, 0);
	if (arr == NULL)
	{
		printf("Test 1 Passed: Correctly handled zero count and size\n");
	}
	else
	{
		printf("Test 1 Passed: Returned non-NULL, which is also acceptable\n");
		free(arr);
	}
}*/
/*void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	while (i < count * size)
		tmp[i++] = 0;
	return (tmp);
}*/
/*
#include <stdio.h>

int	main(void)
{
	char *a;
	a = (char *)ft_calloc(1,1);
	printf("%c", *a);
}*/

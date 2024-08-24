/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almishch <almishch@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:09:28 by almishch          #+#    #+#             */
/*   Updated: 2024/08/08 14:10:31 by almishch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_strncmp(char const *s1, char const *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s2 && *s1 == *s2 && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return (((unsigned char)(*s1) - (unsigned char)(*s2)));
}

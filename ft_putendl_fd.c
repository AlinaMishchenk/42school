/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almishch <almishch@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:39:16 by almishch          #+#    #+#             */
/*   Updated: 2024/08/20 15:43:35 by almishch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	str_len(char *str)
{
	size_t	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

void	ft_putendl_fd(char *s, int fd)
{
	char	nl;

	nl = '\n';
	if (s)
	{
		write(fd, s, str_len(s));
		write(fd, &nl, 1);
	}
}

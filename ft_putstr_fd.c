/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almishch <almishch@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:28:43 by almishch          #+#    #+#             */
/*   Updated: 2024/08/05 15:59:26 by almishch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The function writes the contents of a string to the specified file descriptor.
//It uses the write system call to write the string to the file descriptor.
//The function assumes that the write operation will be successful
//and does not include explicit error handling.

#include "libft.h"

static size_t	str_len(char *str)
{
	size_t	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write(fd, s, str_len(s));
}

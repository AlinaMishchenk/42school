/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almishch <almishch@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 16:19:24 by almishch          #+#    #+#             */
/*   Updated: 2024/08/01 16:22:19 by almishch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Determines whether a given character is a printable
//character according to the ASCII table.
//It considers characters in the range from 32 to 126,
//inclusive, as printable characters.

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}

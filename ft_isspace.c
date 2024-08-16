/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almishch <almishch@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:56:21 by almishch          #+#    #+#             */
/*   Updated: 2024/08/01 15:57:02 by almishch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks if a character is a whitespace character.

int	ft_isspace(int c)
{
	if ((c > 8 && c < 14)
		|| (c == 32))
		return (1);
	return (0);
}

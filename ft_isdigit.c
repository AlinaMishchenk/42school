/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almishch <almishch@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:54:18 by almishch          #+#    #+#             */
/*   Updated: 2024/08/01 15:54:58 by almishch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Verifies whether a character is a digit.
//It considers characters in the range from 48 to 57,
//which corresponds to ASCII values for digits 0 to 9.
//If the input character falls within this range,
//the function returns a non-zero value; otherwise, it returns 0.

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
/*int	main(void)
{
	printf("%d", ft_isdigit('8'));
}*/

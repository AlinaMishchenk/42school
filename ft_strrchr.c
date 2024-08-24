/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almishch <almishch@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:44:43 by almishch          #+#    #+#             */
/*   Updated: 2024/08/24 20:55:32 by almishch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Poisk poslednego vhozdenia  symbol v stroku
#include "libft.h"

char	*ft_strrchr(char const *str, int c)
{
	char const	*aux;

	aux = str;
	while (*str)
		str++;
	while (str >= aux)
		if (*str-- == (char)c)
			return ((char *)str + 1);
	return (NULL);
}

/*int main()
{
	const char *str1 = "Hi";
	const char *str2 = "No";
	const char *str2 = "";
	int C1 = "i";
	int C1 = "o";
	int C1 = "M";
char *result = ft_strrchr (str1,C1);
if (result)
	printf ()*/

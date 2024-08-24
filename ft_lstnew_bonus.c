/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almishch <almishch@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 20:19:26 by almishch          #+#    #+#             */
/*   Updated: 2024/08/24 20:19:30 by almishch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Sozdanie novogo elements spiska y inisilizacia ego sodergimim
//peredanoggo v argumente content
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->content = content;
	elem->next = NULL;
	return (elem);
}

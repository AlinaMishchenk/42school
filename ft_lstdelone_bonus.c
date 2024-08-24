/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almishch <almishch@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:00:51 by almishch          #+#    #+#             */
/*   Updated: 2024/08/22 16:17:32 by almishch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Prohodit po vsem elementam spiska i priminiaet function "f" 
// k soderzhimomu kazdogo elementa.
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(del)(lst->content);
	free(lst);
	lst = NULL;
}

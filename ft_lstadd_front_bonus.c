/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almishch <almishch@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:48:30 by almishch          #+#    #+#             */
/*   Updated: 2024/08/24 20:01:59 by almishch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//add new elements in beggining of list
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL)
		return ;
	new ->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list	*s;
	t_list	*k;

	s = ft_lstnew("hi");
	k = ft_lstnew("bye");
	ft_lstadd_front(&s, k);
	printf("\n");
}*/

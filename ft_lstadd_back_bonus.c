/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almishch <almishch@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:30:40 by almishch          #+#    #+#             */
/*   Updated: 2024/08/24 19:57:12 by almishch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Function add a new element in the end of sviazannogo spiska

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		temp = *lst;
		while (temp -> next != NULL)
		{
			temp = temp ->next;
		}
		temp ->next = new;
	}
}

/*#include <stdio.h>
int	main(void)
{
	t_list	*a;
	t_list	*b;

	a = ft_lstnew("hi");
	b = ft_lstnew("friend");
	ft_lstadd_back(&a, b);
	printf("%p\n", (a->content));
}*/

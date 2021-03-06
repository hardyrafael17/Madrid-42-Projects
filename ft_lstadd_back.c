/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjimenez <hjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:03:37 by hjimenez          #+#    #+#             */
/*   Updated: 2021/10/29 08:46:10 by hjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	node = *lst;
	if (lst)
	{
		if (*lst)
		{
			while (node->next != NULL)
			{
				node = node->next;
			}
			node->next = new;
		}
		if (!*lst)
		{
			*lst = new;
		}	
	}
	else if (lst == NULL)
	{
		lst = &new;
	}
}

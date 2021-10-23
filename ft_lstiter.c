/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjimenez <hjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 22:17:28 by hjimenez          #+#    #+#             */
/*   Updated: 2021/10/22 16:44:16 by hjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *node;
	
	node = lst;
	if(!lst)
		return;
	while (node->next != NULL)
	{
		f(node->content);
		node = node->next;
	}
	f(node->content);
	return;
}
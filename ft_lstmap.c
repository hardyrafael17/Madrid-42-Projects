/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjimenez <hjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 23:02:25 by hjimenez          #+#    #+#             */
/*   Updated: 2021/10/21 23:22:29 by hjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list *copy;
	t_list **main_node_copy;

	if(!lst)
		return (NULL);
	copy = ft_lstnew(lst->content);
	main_node_copy = &copy;
	f(copy->content);
	del(lst);
	while (lst->next != NULL)
	{
		copy->next = ft_lstnew(copy->content);
		f(copy->content);
		lst = lst->next;
		del(lst);
	}
	copy->next = ft_lstnew(copy->content);
	f(copy->content);
	del(lst);
	return (*main_node_copy);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjimenez <hjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:37:16 by hjimenez          #+#    #+#             */
/*   Updated: 2021/10/28 19:44:03 by hjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*node;

	node = lst;
	i = 0;
	if (!lst)
		return (0);
	while (node->next != NULL)
	{
		node = node->next;
		i++;
	}
	i++;
	return (i);
}

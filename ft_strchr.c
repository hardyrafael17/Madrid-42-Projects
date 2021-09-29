/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjimenez <hjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 14:10:56 by hjimenez          #+#    #+#             */
/*   Updated: 2021/09/28 14:35:54 by hjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*character;
	char	*holder;

	i = 0;
	character = (char *)s;
	while (*(character + i))
	{
		if (*(character + i) == c)
			holder = (character + i);
		i++;
	}
	if (c == *(character + i))
		holder = (character + i);
	if (c == *(holder))
		return (holder);
	else
		return (NULL);
}

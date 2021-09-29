/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjimenez <hjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:25:44 by hjimenez          #+#    #+#             */
/*   Updated: 2021/09/29 15:04:00 by hjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*string;

	string = (char *)s;
	i = 0;
	while (i < n && *(string + i))
	{
		if ((unsigned char)*(string + i) == (unsigned char) c)
		{
			return (string + i);
		}
		i++;
	}
	if (c == 0)
		return (string + i);
	else
		return (NULL);
}

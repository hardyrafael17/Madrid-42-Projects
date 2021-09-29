/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjimenez <hjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:25:44 by hjimenez          #+#    #+#             */
/*   Updated: 2021/09/29 15:32:07 by hjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*string;
	unsigned char	*string2;

	string = (unsigned char *)s1;
	string2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (*(string + i) != *(string2 + i))
		{
			return (*(string + i) \
			 - *(string2 + i));
		}
		i++;
	}
	return (0);
}

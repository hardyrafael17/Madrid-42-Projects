/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjimenez <hjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:35:59 by hjimenez          #+#    #+#             */
/*   Updated: 2021/10/06 19:01:22 by hjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*haystack_str;
	char	*needle_str;
	size_t	i;
	size_t	needle_length;

	if (len == 0)
		return ((char *)haystack);
	needle_length = ft_strlen(needle);
	haystack_str = (char *)haystack;
	needle_str = (char *)needle;
	i = 0;
	if (!needle[0])
		return (haystack_str);
	while (i < len - needle_length && len > 0 && *(haystack+i))
	{
		if (!ft_memcmp(needle_str, haystack_str + i, needle_length))
			return (haystack_str + i);
		i++;
	}
	return (NULL);
}

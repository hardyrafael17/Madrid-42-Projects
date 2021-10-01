/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjimenez <hjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:35:59 by hjimenez          #+#    #+#             */
/*   Updated: 2021/10/01 10:42:06 by hjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*haystack_str;
	char	*needle_str;
	size_t	i;

	haystack_str = (char *)haystack;
	needle_str = (char *)needle;
	i = 0;
	printf("\n\nHaystack *%s*, Needle *%s*, len *%d*\n \n", (char *)haystack, (char *)needle, (int)len);
	if (needle[0] || haystack[0])
		return (NULL);
	while (i <= len)
	{
		if (ft_memcmp(needle_str, haystack_str + i, ft_strlen(needle_str)))
		{
			return (haystack_str + i);
		}
		i++;
	}
	return (NULL);
}

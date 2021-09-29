/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjimenez <hjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:35:59 by hjimenez          #+#    #+#             */
/*   Updated: 2021/09/29 16:03:50 by hjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str_haystack;
	char	*str_needle;
	size_t	i;

	str_haystack = (char *)haystack;
	str_needle = (char *)needle;
	i = 0;
	if (!str_needle)
		return (str_needle);
	while (i < len)
	{
		if (ft_memcmp(str_needle, str_haystack + i, ft_strlen(str_needle)))
			return (str_haystack + i);
		i++;
	}
	return (0);
}

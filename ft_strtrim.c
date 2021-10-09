/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjimenez <hjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 07:57:23 by hjimenez          #+#    #+#             */
/*   Updated: 2021/10/09 12:15:04 by hjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size_set;
	size_t	size_s1;
	size_t	start;
	size_t	end;
	char	*result;

	if (!s1 || !set)
		return (NULL);
	size_set = (ft_strlen(set));
	size_s1 = (ft_strlen(s1));
	start = 0;
	while (ft_memchr(set,*(s1 + start), size_set))
		start++;
	if (start >= size_s1)
		return (ft_calloc(1, 1));
	end = size_s1;
	while (ft_memchr(set, *(s1 + end), size_set))
		end--;
	result = ft_substr(s1, start, end - start + 1);
	if (!result)
		return (NULL);
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjimenez <hjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 07:57:23 by hjimenez          #+#    #+#             */
/*   Updated: 2021/10/04 10:18:35 by hjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	FILE	*file;
	size_t	i;
	size_t	j;
	char	*trimmed;

	file = fopen("testsssss.txt", "a");
	i = 0;
	j = ft_strlen(s1);
	fprintf(file, "\n j =%zu", j);
	while (ft_strchr(set, s1[i]))
	{
		i++;
	}
	while (ft_strchr(set, s1[j - 1]))
	{
		fprintf(file, "\nHit %zu and s1 =*%c* and\
		 set**%s**  return ****%s****\n", j, s1 [j - 1] \
		, set, ft_strchr(set, s1 [j - 1]));
		j--;
	}
	fprintf(file, "\nfunction called with string ---*%s*---- and set ----*%s*----\n	\
	i=%zu		j=%zu", s1, set, i, j);
	trimmed = ft_substr(s1, i, j - i);
	fprintf(file, "\n			result %s", trimmed);
	return (trimmed);
}

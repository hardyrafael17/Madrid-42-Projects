/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjimenez <hjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 08:44:46 by hjimenez          #+#    #+#             */
/*   Updated: 2021/10/10 10:03:38 by hjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**strarr;
	size_t	i;
	char	*spointer;

	strarr = ft_calloc(i, sizeof(char *));
	size_t	compare;
	spointer = (char *)s;
	compare = 0;

	while (*(spointer + compare) == c || *(spointer + compare))
	{
		while (*(spointer + compare + 1) != c && *(spointer + compare + 1))
		{
			spointer = ft_strchr(spointer + 1, c);
		}
		compare++;
	}
	i = 1;
	strarr = ft_calloc(i, sizeof(char *));
	return (strarr);
}

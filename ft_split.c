/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjimenez <hjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 08:44:46 by hjimenez          #+#    #+#             */
/*   Updated: 2021/10/28 20:10:14 by hjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char const *s, char c)
{
	size_t	words;
	size_t	i;
	size_t	wordLength;

	words = 0;
	i = 0;
	wordLength = 0;
	while (*(s + i))
	{
		if (*(s + i) != c)
		{
			wordLength++;
			if (wordLength == 1)
				words++;
		}
		if (wordLength > 0 && (*(s + i + 1) == 0 || *(s + i + 1) == c))
			wordLength = 0;
		i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	size_t	i;
	char	**arr;
	size_t	wordLength;

	if (!s)
		return (NULL);
	wordLength = 0;
	words = count_words (s, c);
	arr = ft_calloc(words + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	words = 0;
	i = 0;
	wordLength = 0;
	while (*(s + i))
	{
		if (*(s + i) != c)
		{
			wordLength++;
			if (wordLength == 1)
				words++;
		}
		if (wordLength > 0 && (*(s + i + 1) == 0 || *(s + i + 1) == c))
		{
			arr[words - 1] = ft_substr(s, i - wordLength + 1, wordLength);
			wordLength = 0;
		}
		i++;
	}
	return (arr);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjimenez <hjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 08:44:46 by hjimenez          #+#    #+#             */
/*   Updated: 2021/10/28 23:28:11 by hjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char const *s, char c)
{
	size_t	words;
	size_t	i;
	size_t	word_length;

	words = 0;
	i = 0;
	word_length = 0;
	while (*(s + i))
	{
		if (*(s + i) != c)
		{
			word_length++;
			if (word_length == 1)
				words++;
		}
		if (word_length > 0 && (*(s + i + 1) == 0 || *(s + i + 1) == c))
			word_length = 0;
		i++;
	}
	return (words);
}

void	create_arr(char **arr, char const *s, char c)
{
	size_t	words;
	size_t	i;
	size_t	word_length;

	word_length = 0;
	words = 0;
	i = 0;
	while (*(s + i))
	{
		if (*(s + i) != c)
		{
			word_length++;
			if (word_length == 1)
				words++;
		}
		if (word_length > 0 && (*(s + i + 1) == 0 || *(s + i + 1) == c))
		{
			arr[words - 1] = ft_substr(s, i - word_length + 1, word_length);
			word_length = 0;
		}
		i++;
	}
	return ;
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**arr;

	if (!s)
		return (NULL);
	words = count_words (s, c);
	arr = ft_calloc(words + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	create_arr(arr, s, c);
	return (arr);
}

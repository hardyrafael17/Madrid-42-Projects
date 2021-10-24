#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substring;
	size_t s_size_str;

	if (!s)
		return (NULL);
	s_size_str = ft_strlen(s);
	if (len > s_size_str) {
		substring = ft_calloc(s_size_str, sizeof(char));
	}
	else
	{
		substring = ft_calloc(len + 1, sizeof(char));
	}
	if (!substring)
		return (NULL);
	if (start > s_size_str)
		return (substring);
	if (!ft_strlcpy(substring, s + start, len + 1))
		return (NULL);
	return (substring);
}

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;

	if (!s)
		return (NULL);
	substring = ft_calloc(len + 1, sizeof(char));
	if (substring == 0)
		return (NULL);
	if (start > ft_strlen(s))
		return (substring);
	if (!ft_strlcpy(substring, s + start, len + 1))
		return (NULL);
	return (substring);
}

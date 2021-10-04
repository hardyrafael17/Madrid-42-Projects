#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	FILE	*file;
	char	*substring;

	file = fopen("ft_substr.txt", "a");
	fprintf(file, "\nFunction called with arguments (string)**%s**, \
	start(%d), len (%zu)", (char *)s, start, len);
	substring = ft_calloc(len + 1, sizeof(char));
	if (start > ft_strlen(s))
		return (substring);
	ft_strlcpy(substring, s + start, len + 1);
	fprintf(file, "\n	returned string from ft_strlcpy =**%s**\n", substring);
	return (substring);
}

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*duplicate;

	duplicate = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	ft_memcpy(duplicate, s, ft_strlen(s));
	return (duplicate);
}

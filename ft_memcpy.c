#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*destination;
	char	*source;

	source = src;
	i = 0;
	destination = dest;
	while (i < n)
	{
		destination[i] = *(source + i);
		i++;
	}
	return (destination);
}

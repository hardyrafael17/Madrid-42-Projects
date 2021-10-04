#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*puntero;
	size_t	nbytes;

	nbytes = size * nmemb;
	puntero = malloc(nbytes);
	ft_bzero(puntero, nbytes);
	return (puntero);
}

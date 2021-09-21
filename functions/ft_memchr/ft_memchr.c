#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n);

int main()
{
	const char	str[] = "http://wwww3cschool,cy";
	const char	ch = '.';
	char	*ret;

	ret = ft_memchr(str, ch, 45);
	printf("|%c| - |%s|\n", ch, ret);
	return (0);
}

void	*ft_memchr(const void *s, int c, size_t n)
{
	void	*puntero = "Hola";
	size_t	cont;
	int	var;
	int i;

	i = 0;
	var = 0;
	cont = 0;
	while (cont < n)
	{
		char letra = (char) s[cont];
		if (letra == c)
		{
			cont = n;
		}
		cont++;
		var++;
	}
	while (s[var] != '\0')
	{
		puntero[i] = s[var];
		var++;
		i++;
	}
	return (puntero);
}

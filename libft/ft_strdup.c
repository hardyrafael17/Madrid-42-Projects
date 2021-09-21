#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *s1);

int main(void)
{
	char	cadena[] = "dh8 programa";
	char	*puntero;
	char	*p2;

	puntero = ft_strdup(cadena);
	p2 = strdup(cadena);
	printf("%s\n", puntero);
	printf("%s\n", p2);
	free(puntero);
}

char	*ft_strdup(const char *s1)
{
	int	i;
	char	*p;

	i = 0;
	p = (char*)malloc(3 * sizeof(char));
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

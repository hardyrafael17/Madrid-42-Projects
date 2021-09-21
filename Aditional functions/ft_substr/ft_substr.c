#include <stdio.h>
#include <stdlib.h>
char *ft_substr(char const *s, unsigned int start, size_t len);
int main(void)
{
	char const *s = "Soy un marciano";
	unsigned int start = 5;
	size_t len = 16;
	char *puntero = ft_substr(s, start, len);
	printf("%s\n", puntero);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	int	i;
	char *cadena;

	i = 0;
	cadena = (char*)malloc(3*sizeof(int));
	
	while (start < len)
	{
		cadena[i] = s[start];
		i++;
		start++;
	}
	cadena[i]='\0';
	return cadena;
}

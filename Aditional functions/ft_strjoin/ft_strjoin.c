#include <stdio.h>
#include <stdlib.h>
char *ft_strjoin(char const *s1, char const *s2);
int main(void)
{
	char const *s1 = "Soy un marciano";
	char const *s2 = " de un planeta llamado Marte";
	char *puntero = ft_strjoin(s1, s2);
	printf("%s\n", puntero);
}

char *ft_strjoin(char const *s1, char const *s2)
{
	int i;
	int j;
	char *cadena;

	i = 0;
	j = 0;
	cadena = (char*)malloc(3*sizeof(char));
	while (s1[i]!='\0')
	{
		cadena[i] = s1[i];
		i++;
	}
	while (s2[j]!='\0')
	{
		cadena[i]=s2[j];
		i++;
		j++;
	}
	cadena[i]='\0';

	return cadena;
}

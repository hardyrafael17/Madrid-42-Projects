#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);
int main()
{
	//char *wakebuff[2]={"Hola, Xiao Ai","Hola, compañero de clase Xiao Ai"};
	char *exitbuff[3]={"Sistema de salidaI","palir del programaIy","abandonar"};
	char *result = "palir del programap";
	printf("%s\n",exitbuff[1]);
	int res = ft_memcmp(exitbuff[1],result,444);
	printf("res is = %d    len= %lu\n",res,strlen(result));
	if(res == 0)
	{
		printf("compared sucessful\n\n");
	}else
	{
		printf("compared fail\n\n");
	}
	return (0);
}

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int res;
	void **p1 = s1;
	void **p2 = s2;

	unsigned int i=0;
	while(i < n)
	{
		if(p1[i] == p2[i])
		{
			res = 0;
		}
		else
		{
			return s1[i] - s2[i];
		}
		i++;
	}
	return (res);
}

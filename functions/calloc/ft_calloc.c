#include <stdio.h>
#include <stdlib.h>

void *ft_calloc(size_t count , size_t size);
int main(void)
{
	int N=3;
	int *contador;
	int *contador2;

	contador=(int*) ft_calloc(N,sizeof(int));
for (int i=0;i<N;i++){
		printf("%i\n",*(contador+i));
	}
free(contador);
	contador2=(int*) ft_calloc(N,sizeof(int));

	
	printf("\n\n");
		for (int x=0;x<N;x++){
		printf("%i\n",*(contador2+x));
	}
}

void *ft_calloc(size_t count , size_t size)
{
	void *puntero;

	puntero = (void*)malloc(size*count);
	return puntero;
}

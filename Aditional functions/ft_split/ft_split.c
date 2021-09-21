#include <stdio.h>
#include <stdlib.h>

char **ft_split(char const *s, char c);

int main(void){
	char const *s="goy un marcianohgkodhf";
	char **cad;

	cad=ft_split(s, 'o');
}

char **ft_split(char const *s, char c){
	char **puntero;
	int i=0;
//	int pos=0;
	int cont=0;
	

	puntero=(char**)malloc(3*sizeof(char*));
	while(s[i]!='\0'){
		if(s[i]==c){
			if(i==0 && s[i+1]!=c && s[i+1]!='\0'){
				cont++;			printf("1.  %d\n",cont);

			}else if(i==1 && s[i-1]!=c){
				cont++;			printf("2. %d\n",cont);

			}
			else if(s[i+1]!=c && s[i+1]!='\0'){
				cont++;
							printf("3. %d\n",cont);

			}

/*
			puntero[][]=s[pos];
			pos=i;*/

		}
		i++;
	}
			printf("\n%d\n",cont);
return puntero;
}

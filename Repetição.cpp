#include <stdio.h>
#include <stdlib.h>

int main()
{
	int rep;
	printf("Digite quantas vezes quer repetir a frase: \n");
	scanf("%d",&rep);
	while (rep>0){
		printf("sou um programador \n");
		rep = rep-1;
	}
		

	return 0;
}

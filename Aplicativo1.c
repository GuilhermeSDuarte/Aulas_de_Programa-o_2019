#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float av1,av2,av3,media;
	
	printf("digite a nota av1:");
	scanf("%f",&av1);
	printf("digite a nota av2:");
	scanf("%f",&av2);
	printf("digite a nota av3:");
	scanf("%f",&av3);
	media = (av1+av2+av3)/3;
	if (media>=6){
		printf("aprovado");
	}
	else
	printf("Reprovado");
	return 0;
	
}

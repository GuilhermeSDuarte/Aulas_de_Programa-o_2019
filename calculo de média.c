#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	float av1,av2,av3,media;
	
	printf("digite a nota da av1: \n");
	scanf("%f",&av1);
	printf("digite a nota da av2: \n");
	scanf("%f",&av2);
	printf("digite a nota da av3: \n");
	scanf("%f",&av3);
	media=(av1+av2+av3)/3;
	if (media>=6)
	printf("Aprovado");
	else
	printf("Reprovado")
	
	return 0 ;
	
	
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float n1,n2,media;
	int faltas;
	
	printf("Digite a primeira nota: \n");
	scanf("%f",&n1);
	printf("Digite a segunda nota: \n");
	scanf("%f",&n2);
	media=  (n1 + n2) /2;
	printf("Digite as faltas: \n");
	scanf("%d",&faltas);
	if
	(media>=6 && faltas<=20)
	printf("aprovado");
	else
	printf("Reprovado");
	
	return 0;
}

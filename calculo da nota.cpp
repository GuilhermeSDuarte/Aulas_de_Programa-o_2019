#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	float nota;
	
	printf("Digite a nota do aluno: \n");
	scanf("%f",&nota);
	if (nota>=0&&nota<3)
	printf ("Nota do aluno é E \n");
	else if (nota>=3&&nota<5)
	printf  ("Nota do aluno é D \n");
	else if (nota>=5&&nota<7)
	printf("Nota do alune é C \n");
	else if (nota>=7&&nota<9)
	printf("Nota do alune é B \n");
	else if (nota>=9&&nota<=10)
	printf("Nota do alune é A \n");
	else
	printf("Nota invalida");

	
	return 0;
	
}

#include "biblio.h"

struct aluno{
	int  ra;
	char nome[20];
};
main()
{
	struct aluno al[10];
	int i=0;
	for(i=0;i<=2;i++)
	{
		printf("_______________\nDigite o seu Ra:");
		scanf("%d",&al[i].ra);
		printf("\nDigite o nome: ");
		fflush(stdin);;
		gets(al[i].nome);
	}
	
	system("pause>null");
	system("cls");
	
	for(i=0;i<=2;i++)
	{
		printf("Ra: %d\n",al[i].ra);
		printf("nome: %s\n__________\n",al[i].nome);
	}
		system("pause>null");
}

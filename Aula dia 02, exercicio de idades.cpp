#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	char Nome1 [20], Nome2 [20];
	int Idade1, Idade2;
	
	printf("Qual o nome da primeira pessoa?: \n ");
	fflush (stdin);
	gets(Nome1);
	printf("Qual o nome da segunda pessoa?: \n ");
	fflush (stdin);
	gets(Nome2);
	printf("Qual a idade da primeira pessoa?: \n ");
	scanf("%d",&Idade1);
	printf("Qual a idade da segunda pessoa?: \n ");
	scanf("%d",&Idade2);
	
	if (Idade1>Idade2)
	printf("%s é mais velho que %s.\n",Nome1,Nome2);
	else if (Idade2>Idade1)
	printf("%s é mais velho que %s.\n",Nome2,Nome1);
	else 
	printf("%s possui a mesma idade que %s.\n",Nome1,Nome2);
		
	system("pause");
	
	
}


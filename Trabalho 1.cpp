#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


main(){
	char nome[30];
	int idade;
	setlocale(LC_ALL,"portuguese");
	printf("Digite seu nome:\n");
	fflush (stdin);
	gets(nome);
	printf("Digite sua idade:\n");
	scanf("%d",&idade);
	
	
	if(idade>=16)
	printf("%s voc� pode votar\n",nome);
	else
	printf("%s voc� n�o pode votar\n",nome);
	

	system("pause");
	
	
}

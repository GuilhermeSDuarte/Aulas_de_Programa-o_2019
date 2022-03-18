#include <stdio.h>
#include <stdlib.h>

main()
{
	int idade;
	float peso;
	char nome[20], sexo ;//f-feminino, m-masculino, nome[20] é uma string.
	printf("Digite seu nome: ");
	fflush(stdin);// comando para ler uma string no qual auxilia o gets.
	gets(nome);// serve como o leia, para ler as informações da variavel char.
	printf("Digite seu sexo: (f-feminino, m-masculino)");
	fflush(stdin);
	sexo = getchar();// getchar serve para ler um caracter simples.
	printf("digite a sua idade e seu peso: ");
	scanf("%d%f",&idade,&peso);
	printf("NOME: %s, SEXO: %c,",nome,sexo);
	printf("PESO: %.2f, IDADE: %d\n\n",peso,idade);// %.2f o .2 serve para que só mostre duas casas decimais.

	system("pause");
}

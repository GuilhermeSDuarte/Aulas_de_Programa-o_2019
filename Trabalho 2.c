#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	char sexo,nome[30];
	int peso,idade;
	float altura;
	setlocale(LC_ALL,"portuguese");
	printf("Para se cadastrar no nosso site preencha os dados abaixo\n");
	printf("Digite seu nome:\n");
	fflush (stdin);
	gets(nome);
	printf("Digite sua idade:\n");
	scanf("%d",&idade);
	printf("Digite sua altura:\n");
	scanf("%f",&altura);
	printf("seu sexo é [f] ou [m]:\n");
	fflush (stdin);
	sexo=getchar();
	printf("Digite seu peso:\n");
	scanf("%d",&peso);
	
	printf("\n nome:%s \n idade:%d \n altura:%.2f \n sexo:%c \n peso:%d \n",nome,idade,altura,sexo,peso);
	system("pause");

}

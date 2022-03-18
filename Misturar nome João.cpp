#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	int I;
	char nome['20'], nome2['20'];
	
	printf("\n Digite Seu Nome:\n");
	fflush(stdin);
	gets(nome);
	
	printf("\n Digite o Outro Nome:\n");
	fflush(stdin);
	gets(nome2);
	
	for(I=0;I<=20;I++){
		
		printf("%c",nome[I]);
		printf("%c",nome2[I]);
		
	}
}

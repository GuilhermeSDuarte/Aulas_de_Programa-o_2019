#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
int main(){
	
	int i;
	char nome[90];
	
	printf("\n Digite Seu Nome:\n");
	fflush(stdin);
	gets(nome);
	nome[0]	= toupper(nome[0]);	
	while(nome[i]!='\0'){
	
	if(nome[i - 1]==' '){
		nome[i] = toupper(nome[i]);
	}
	i++;
	}
	system("cls");
	printf("%s",nome);
    system("pause>null");
}


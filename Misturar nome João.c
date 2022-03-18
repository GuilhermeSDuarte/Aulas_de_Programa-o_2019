#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
int main(){
	
	int i;
	char nome['20'];
	
	printf("\n Digite Seu Nome:\n");
	fflush(stdin);
	gets(nome);
		
	for(i=0;nome[i]!='\0';i++){
	nome[0]	= toupper(nome[0]);
	if(nome[i-1]==""){
		nome[i] = toupper(nome[i]);
		i++;
	}
	printf("%s",nome);}
    system("pause>null");
}


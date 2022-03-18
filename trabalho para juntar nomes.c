#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	
int main(void){
	char voce[20];
	char amigo[25];
	int v, a;
	
	setlocale(LC_ALL,"portuguese");
	printf("MISTURANDO\n\n");
	printf("Digite seu nome: ");
	fflush(stdin);
	gets(voce);
	printf("Digite o nome do seu amigo: ");
	fflush(stdin);
	gets(amigo);
	
	for(v=0,a=0;voce[v]!='\0' || amigo[a]!='\0';v++){
		if(voce[v]!='\0'){
		printf("%c",voce[v]);}
		if(amigo[a]!='\0'){
		printf("%c",amigo[a]);
		a++;}
	}
	
	system("pause>null");
}

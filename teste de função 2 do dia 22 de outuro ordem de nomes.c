#include "biblio.h"
#include "alfabeto.h"
int main(){
	portugues();
	char palavra[30]="",nome2[30]="";
	printf("Digite um nome: ");
	fflush(stdin);
	gets(palavra);
	printf("Digite outro nome: ");
	fflush(stdin);
	gets(nome2);
	ordem(palavra, nome2);
	system("pause>null");
}

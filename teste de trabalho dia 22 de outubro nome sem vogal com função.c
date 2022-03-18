#include "biblio.h"
#include "vogal.h"
int main(){
	portugues();
	char palavra[30]="";
	printf("Digite um nome: ");
	fflush(stdin);
	gets(palavra);
	vogais(palavra);
	system("pause>null");
}

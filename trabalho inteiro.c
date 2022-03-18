#include "biblio.h"
#include "geral22.h"
char nome[30]="", la, ls,palavra[30]="",nome1[30]="", nome2[30]="";
int main(){
	
	printf("Digite uma palavra: ");
	fflush(stdin);
	gets(nome);
	
	printf("Digite a letra no qual quer substituir: ");
	fflush(stdin);
	la=getchar();
	
	printf("Digite a letra no qual quer colocar no lugar da anterior:");
	fflush(stdin);
	ls=getchar();
	
			
	alterar(nome,la,ls);
	system("pause>null");
	system("cls");
	

	printf("Digite a palavra no qual quer que as vogais sejam excluidas: ");
	fflush(stdin);
	gets(palavra);
	remover(palavra);
	system("pause>null");
	system("cls");
	
	
	printf("Digite um nome: ");
	fflush(stdin);
	gets(nome1);
	printf("Digite outro nome: ");
	fflush(stdin);
	gets(nome2);
	alfabetica(nome1,nome2);
	system("pause>null");
	
	
}

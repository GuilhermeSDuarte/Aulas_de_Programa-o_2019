#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	char nome[20]="",letra="";
	int i,soma=0;
	printf("Digite um nome: ");
	fflush(stdin);
	gets(nome);
	
	printf("\nDigite uma letra: ");
	fflush(stdin);
	letra=getchar();
	
	for(i=0;nome[i]!='\0';i++){
		
		if(nome[i]==letra){
			printf("Letra na posição %d\n",i);
			soma++;
	}
		
	}
	printf("Foram encontradas %d ocorrencias. ",soma);
	system("pause>null");
	
	
}

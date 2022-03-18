#include <stdio.h>
#include <stdlib.h>

main(){
	char nome[20];
	/*vetor - conjunto de variaveis do mesmo tipo alocadas de forma adjacente ou sequência na memoria RAM.
	É uma estrutura de dados unidimensional, estatica(em C) e volatil.*/
	int n=0,v=0,c=0;
	printf("Digite seu nome: ");
	fflush(stdin);
	gets(nome);
	
	for(n=0;nome[n]!='\0';n++){
		switch(nome[n]){
			case 'a' : v++; break;
				case 'e' : v++; break;
					case 'i' : v++; break;
						case 'o' : v++; break;
							case 'u' : v++; break;
	default:
	c++;						
	}}
	printf("Seu nome possúi %d vogais e %d consoantes. ",v,c);
	system("pause>null");
}


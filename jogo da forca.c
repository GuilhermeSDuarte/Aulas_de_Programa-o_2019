#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	char p_secreto[20]=" ",palavra[20]=" ",letra=" ";
	int erro,i,acerto=0,valor;
	
	printf("Digite A Palavra Secreta: ");
	fflush(stdin);
	gets(p_secreto);
	
	for(i=0;p_secreto[i]!='\0';i++){
		palavra[i]='_';
	}
	printf("Descubra a palavra secreta.\n\n%s\nPressione qualquer tecla.\n",palavra);
	system("pause>null");
	system("CLS");
	while(1){
		printf("\nDigite uma letra: ");
		fflush(stdin);
		letra=getchar();	
		system("CLS");
	for(valor=0;p_secreto[valor]!='\0';valor++){		

			
		if(letra==p_secreto[valor]){
			for(i=0;letra==p_secreto[i] && p_secreto[valor]!='\0';i++)
		palavra[i]=letra;
		acerto++;
		printf("\n%s",palavra);
	}

	}	
system("pause>null");	
	}
	}
	

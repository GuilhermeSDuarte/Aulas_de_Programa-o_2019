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
	
	for(valor=0;p_secreto[valor]!='\0';valor++){
	}
		printf("\nDigite uma letra: ");
		fflush(stdin);
		letra=getchar();	
		system("CLS");
	for(i=0;p_secreto[i]!='\0';i++){
		
			
		if(letra==p_secreto[i]){
		palavra[i]=letra;
		acerto++;
		printf("\n%s",palavra);
	
		}
	}	
		if(acerto==valor){
		printf("\nVocê acertou e a palavra é %s", p_secreto);
		break;}
	
	if(letra!=p_secreto[i]){
	erro++;
	printf("\n%s",palavra);
	}
		if(erro==6){
			printf("\nVocê perdeu!!");
		break;
	}
		if(acerto==valor){
		printf("\nVocê acertou e a palavra é %s", p_secreto);
		
	}
	if(acerto==valor){
	break;
	}
	if(erro==6){
		break;
	}
	}

system("pause>null");	
	 
}


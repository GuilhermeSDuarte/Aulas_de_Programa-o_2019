#include "biblio.h"

int main(){
	portugues();
	int locais [3] [3]={{0,0,0},{0,0,0},{0,0,0}},local [3] [3]={{0,0,0},{0,0,0},{0,0,0}};
	int linha=0, coluna=0,l,c,erro=0;	
	
	for (linha=0;linha<=2;linha++){
		if(linha==0)
		printf("\n ------------\n");
		for (coluna=0;coluna<=2;coluna++){
			printf(" /%d/",local[linha][coluna]);
		}
		printf("\n -----------\n");
		}
		
	printf("\nJogador 1 Digite a posição do barco;");
	printf("\nDigite A Linha de 0 a 2: ");
	scanf("%d",&linha);
	printf("\nDigite A Coluna de 0 a 2: ");
	scanf("%d",&coluna);
	local[linha][coluna]='1';
	system("cls");
	
	while(erro<3){
	printf("\nJogador 2 Digite o local no qual vai atacar a bomba.");
	printf("\nDigite A Linha de 0 a 2: ");
	scanf("%d",&l);
	printf("\nDigite A Coluna de 0 a 2: ");
	scanf("%d",&c);
	if(l==linha && c==coluna){
		printf("\nVocê acertou o barco!!");
		break;
	}
	if(l!=linha || c!=coluna){
		printf("\nVocê errou o barco.");
		erro++;
	}
	locais[l][c]=2;
	
	for (l=0;l<=2;l++){
		if(l==0)
		printf("\n -----------\n");
	for (c=0;c<=2;c++){
		printf(" /%d/", locais[l][c]);
	}
		printf("\n -----------\n");
	}
	}
	if(erro>=3){
		printf("voce perdeu!!!");
	}	
	system("pause>null");
}

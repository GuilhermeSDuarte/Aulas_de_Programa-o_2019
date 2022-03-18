#include "biblio.h"

int main(){
	setlocale(LC_ALL,"portuguese");
	int idades [3] [2];
	int linha=0, coluna=0;
	for (linha=0;linha<=2;linha++){
		for (coluna=0;coluna<=1;coluna++){
			printf("Digite sua idade [%d] [%d] = ",linha,coluna);
			scanf("%d",&idades[linha][coluna]);
		}
		printf("----------------------\n");
	}
		for (linha=0;linha<=2;linha++){
		for (coluna=0;coluna<=1;coluna++){
			if(idades[linha][coluna]>=18){
				printf("são maiores de idade [%d] [%d] com %d anos\n",linha,coluna,idades[linha][coluna]);
			}
		
		}
	}
	
	system("pause");
}

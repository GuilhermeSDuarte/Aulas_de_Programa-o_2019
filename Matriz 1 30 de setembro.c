#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	int matriz[3][2], linha=0, coluna=0
	;
	
	setlocale(LC_ALL,"portuguese");
	for(linha=0;linha<=2;linha++){
		for (coluna=0;coluna<=1;coluna++){
			printf ("matriz [%d] [%d] = ",linha,coluna);
			scanf("%d",&matriz[linha][coluna]);
		}
		printf("----------------------\n");
	}
	for(linha=0;linha<=2;linha++){
	for (coluna=0;coluna<=1;coluna++){
		if(matriz [linha][coluna]%2==1){
			printf("[%d] [%d] = [%d]  = ",linha,coluna,matriz [linha] [coluna]);
		}
	}
}
	system("pause>null");
	
	
	
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	int saldo;
	float valor,saldo=0;
	setlocale(LC_ALL,"portuguese");
	while(valor!=-1){
	printf("Seja bem vindo ao banco *****");
	printf("Oque deseja realizar no nosso banco?\nDepositar-1\nSacar-2\nConsultar saldo-3\nEncerrar sessão- -1");
	scanf("%d",&valor);

	switch(valor){
		case 1:
			printf("\nDigite o valor no qual deseja depositar:\n");
			scanf("%f",&saldo);
			printf("Valor depositado:%.2f\n",saldo);
			
			break;
		case 2:
			printf("\nDigite o valor no qual deseja sacar:\n");
			scanf("%f",&valor);
			printf("Valor sacado:%f\n",valor);
			printf("Valor restante na conta:%.2f\n",saldo);
			break;
		case 3:
			printf("O valor no qual você possui é de R$%.2f",saldo);
			break;
			default:
				printf("opção invalida\n");
	}
	}
	printf("Sessão finalizada");
	system("cls");
	system("pause");
}

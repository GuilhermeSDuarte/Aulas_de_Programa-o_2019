#include <stdio.h>
#include <stdlib.h>

main(){
	char opc;
	printf("Digite o sinal aritmetico: ");
	fflush(stdin);
	opc=getchar();
	switch(opc){
		case '+': printf("soma");break;
		case '-': printf("subtra��o");break;
		case '*': printf("multiplica��o");break;
		case '/': printf("divis�o");break;
		default: printf("Sinal invalido�");break;
	}
	system("pause>null");
	
}

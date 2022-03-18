#include <stdio.h>
#include <stdlib.h>

main(){
	char opc;
	printf("Digite o sinal aritmetico: ");
	fflush(stdin);
	opc=getchar();
	switch(opc){
		case '+': printf("soma");break;
		case '-': printf("subtração");break;
		case '*': printf("multiplicação");break;
		case '/': printf("divisão");break;
		default: printf("Sinal invalido¹");break;
	}
	system("pause>null");
	
}

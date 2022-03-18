#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"portuguese");
	char sinal;
	float n1,n2,exe;
	printf("\nDigite um sinal aritmético: ");
	fflush(stdin);
	sinal=getchar();
	switch(sinal){
	case '+': 
	printf("\nDigite o primeiro valor: "); 
	scanf("%f",&n1); 
	printf("\nDigite o segundo valor: "); 
	scanf("%f",&n2);
	exe = n1+n2;
	printf("\n%.2f+%.2f=%.2f\n",n1,n2,exe);
	break;
	case '-': 
	printf("\nDigite o primeiro valor: "); 
	scanf("%f",&n1); 
	printf("\nDigite o segundo valor: "); 
	scanf("%f",&n2);
	exe = n1-n2;
	printf("\n%.2f-%.2f=%.2f\n",n1,n1,exe);
	break;
	case '*': 
	printf("\nDigite o primeiro valor: "); 
	scanf("%f",&n1); 
	printf("\nDigite o segundo valor: "); 
	scanf("%f",&n2);
	exe = n1*n2;
	printf("\n%.2f*%.2f=%.2f\n",n1,n1,exe);
	break;
	case '/': 
	printf("\nDigite o primeiro valor: "); 
	scanf("%f",&n1); 
	printf("\nDigite o segundo valor: "); 
	scanf("%f",&n2);
	exe = n1/n2;
	printf("\n%.2f/%.2f=%.2f\n",n1,n1,exe);
	break;
	default:
	printf("Sinal invalido!!\n");
	}
	system("pause");
	
	
	
}

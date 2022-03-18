#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float peso, altura, imc;
	
	printf("Digite seu peso: \n");
	scanf("%f",&peso);
	printf("Digite sua altura: \n");
	scanf("%f",&altura);
	imc=peso / (altura*altura);
	
	if(imc<18)
	printf("você está a baixo do peso \n");
	else
	if(imc>18.5 && imc<24.99 )
	printf("Você está com o peso ideal \n");
	else{
	printf("Você está acima do peso \n");
	
	}
	
	
	return 0;
}

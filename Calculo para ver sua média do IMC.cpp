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
	printf("voc� est� a baixo do peso \n");
	else
	if(imc>18.5 && imc<24.99 )
	printf("Voc� est� com o peso ideal \n");
	else{
	printf("Voc� est� acima do peso \n");
	
	}
	
	
	return 0;
}

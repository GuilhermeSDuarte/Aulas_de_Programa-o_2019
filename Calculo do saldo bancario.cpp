#include <stdio.h>
#include <stdlib.h>

//faça um programa no qual usuario digite o saldo bancario e o sistema informa se o saldo é positivo ou negativo.

main()
{
	float saldo;
	printf("Digite o saldo bancario:");
	scanf("%f",&saldo);
	if (saldo<0)
	printf("Seu saldo esta negativo \n\n");
	else
	printf("Seu saldo esta positivo \n\n");
	
	system("pause");
	return 0;
}

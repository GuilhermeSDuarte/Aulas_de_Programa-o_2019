#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main (){
	int Num;
	 
	setlocale(LC_ALL,"portuguese");
	printf("Digite um numero:\n");
	scanf("%d",&Num);
	if((Num%2)==0){
	printf("O numero é Par\n");}
	else
	printf("Numero Impar\n");
	system("pause");
}
 

#include<stdio.h>
#include<stdlib.h>
// faça um programa em linguagem C no qual o usuario digite a idade de duas pessoas e o programa realixze a soma e apresente o resultado.

main ()
{
	int id1,id2,id3;
	printf("digite a sua idade:");
	scanf("%d",&id1);
	printf("digite a idade do seu amigo:");
	scanf("%d",&id2);
	id3=id1+id2;
	printf("A soma das idades é %d \n",id3);
	
	system ("pause");
	
}

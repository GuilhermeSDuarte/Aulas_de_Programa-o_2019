#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int idade;
	
	printf("Digite sua idade: \n");
	scanf("%d",&idade);
	 if (idade<=12)
	 printf("Crianca");
	 else
	 if (idade>12 && idade<18)
	 printf("adolescente");
	 else
	 if (idade>=18 && idade<60)
	 printf("adulto");
	 else	
	 printf("idoso");
	 
	 return 0;
}

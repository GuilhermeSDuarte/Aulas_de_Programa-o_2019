#include <stdio.h>
#include <stdlib.h>


int main() 
{
	
	int rep;
	printf("Quantas vezes quer exibir a mensagem:");
	scanf("%d",&rep);
	while (rep>0){
		printf("Eu sou programador \n");
			rep=rep-1;
		
	}
	return 0;
}

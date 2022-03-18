#include <stdio.h>
#include <stdlib.h>

int main(){
	char L1,L2;
	printf("Digite uma letra:\n");
	fflush (stdin);
	L1=getchar();	
	printf("Digite outra letra:\n");
	fflush (stdin);
	L2=getchar();	
	
	if(L1<L2){
		printf("%c Vem primeiro que %c \n",L1,L2);
		
				
	}
	 else 
	 printf("%c vem primeiro que %c \n",L2,L1);
	
	system("pause");
}

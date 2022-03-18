#include <stdio.h>
#include <stdlib.h>

int main(){
	int Numero,Numero2,Numero3;
	Numero2=0;
	printf("Digite um numero no qual queira a tabuada:");
	scanf("%d",&Numero);
	while (Numero2<10){
	Numero2++;
	Numero3=Numero*Numero2;
	printf("%d x %d=%d\n",Numero,Numero2,Numero3);
	}
	system("pause");
}

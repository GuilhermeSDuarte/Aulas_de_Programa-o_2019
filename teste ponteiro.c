#include <stdio.h>
#include <stdlib.h>


int main(){
	int num1=2;
	int *n;
	 n = &num1;
	printf("digite um numero: ");
	scanf("%d",*n);
	printf("\n %d esse é o novo numero", num1);
	system("pause>null");
}

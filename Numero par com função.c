#include "biblio.h"



void par (int n){
	int p;
	for(p=0;p<=n;p++){
	if(p%2==0){
	printf("%d\n",p);
	}	
	}	
	}

int main(){
	int n;
	printf("Digite um numero: ");
	scanf("%d",&n);
	par(n);
	
	system("pause>null");
	}



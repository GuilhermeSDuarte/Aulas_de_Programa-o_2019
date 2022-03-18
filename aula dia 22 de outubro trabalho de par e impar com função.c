#include "biblio.h"
#include "parimpar.h"

main(){
	portugues();
	int numero;
	printf("Digite um numero: ");
	scanf("%d",&numero);
	printf("O numero %d é %s",numero,epar(numero));
	system("pause>null");	
}

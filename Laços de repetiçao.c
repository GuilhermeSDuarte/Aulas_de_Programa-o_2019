#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	int i,a,b;
	setlocale(LC_ALL,"portuguese");
	a=20;
	printf("Exemplo de la�o de repeti��o\n\n"); //esse la�o s� executa se a variavel for verdadeira.
	i=0;
	while(i<=10){
		printf("%d\n",i);
		i++;    // � a mesma coisa que i+=1 ou i = i + 1
	}
	printf("\n\nExemplo de la�o de repeti��o\n\n"); // o la�o que executa no minimo o printf mesmo a variavel sendo invalida.

	do{
		printf("%d\n",a);
		a++;
	}
	while(a<=10);
	printf("\n\nExemplo de la�o de repeti��o\n\n");
	
	for(b=0;b<=10;b++){// no for ele j� inicia com o valor da variavel, faz a pergunta e adiciona o valor davariavel no caso o incremento.
		printf("%d\n",b);
	}
	
	system("pause");
}


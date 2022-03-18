#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	char voto[2],c1=0, c2=0,nulo=0,branco=0;
	
	setlocale(LC_ALL,"portuguese");
	
	while (voto!=-1){
	
	printf("Raquel=1:\nBruno=2:\nBranco=0:\nNulo:\n\nPara finalizar a votação digite -1\n");
	scanf("%[-1,0,1,2]s",&voto);
	
	
	switch (voto){
	case 0:
		printf("\nRaquel=1:\nBruno=2:\nBranco=0:\nNulo:\n\nPara finalizar a votação digite -1\n");
		scanf("%[-1,0,1,2]%s",&voto);
		branco++;
		break;
	case 1:
		printf("\nRaquel=1:\nBruno=2:\nBranco=0:\nNulo:\n\nPara finalizar a votação digite -1\n");
		scanf("%[-1,0,1,2]%s",&voto);
		c1++;
		break;
	case 2:
		printf("\nRaquel=1:\nBruno=2:\nBranco=0:\nNulo:\n\nPara finalizar a votação digite -1\n");
		scanf("%[-1,0,1,2]%s",&voto);
		c2++;
		break;
	default:
		
		if (voto==1){
			printf("\nRaquel:%d\nBruno:%d\nBranco:%d\nNulo:%d\n",c1,c2,branco,nulo);
		}
		else
		printf("\nRaquel-1:\nBruno-2:\nBranco-0:\nNulo:\n\nPara finalizar a votação digite -1\n");
		scanf("%[-1,0,1,2]%s",&voto);
		nulo++;
		break;
	}	
	printf("\nRaquel:%d\nBruno:%d\nBranco:%d\nNulo:%d\n",c1,c2,branco,nulo);
	
	if(c1>c2){
	c1 = c1+branco;
	printf("\nRaquel ganhou com o total de %d\nE houve o total de %d Brancos e de %d nulos.\n",c1,branco,nulo);}
	else{
	c2 = c2+branco;
	printf("\nBruno ganhou com o total de %d.\nE houve o total de %d Brancos e de %d nulos.\n",c2,branco,nulo);
	}
	}
	

	
	return 0;
	system ("pause>null");
	
	
}



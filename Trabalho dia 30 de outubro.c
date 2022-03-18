#include "biblio.h"
#include <string.h>

struct registro{
	int Ra;
	char Nome[30];
	int CPF;
	int consulta1;
};

main(){
	portugues();
	struct registro RNC[10];
	int opcao,i=0,c,consulta;
	while(opcao!=5){
		printf("\n1-Cadastrar");
			printf("\n2-Consultar");
				printf("\n3-Excluir");
					printf("\n4-Alterar");
						printf("\n5-sair\n--------:");
	scanf("%d",&opcao);
	system("cls");
		switch(opcao){
			case 1:	
				printf("Digite seu Ra: ");
					scanf("%d",&RNC[i].Ra);
				printf("Digite seu Nome: ");
					fflush(stdin);
					gets(RNC[i].Nome);
				printf("Digite seu CPF: ");
					scanf("%d",&RNC[i].CPF);
				printf("Seu id de consulta ou exclusão é %d",i);
				i++;
				if(i>=10){
					printf("Banco de dados cheio!!");
					system("pause>null");
				}
				system("pause>null");
				break;
			case 2:
				printf("Digite o id para consultar os seus dados: ");
					scanf("%d",&consulta);
				if(consulta<=10){
					printf(" O seu cadastro de Ra: %d\n e o seu nome é %s\n CPF: %d",RNC[consulta].Ra,RNC[consulta].Nome,RNC[consulta].CPF );
					system("pause>null");
				}	
				system("cls");
				break;					
			case 3:
				printf("Digite o id dos dados que deseja excluir: ");
					scanf("%d",&consulta);
					for(consulta=0;consulta<=10;consulta++){
						RNC[consulta].CPF=0;
						RNC[consulta].Ra=0;
						strcpy(RNC[consulta].Nome," ");
					}
				system("cls");
				break;
			case 4:
				printf("Digite o id dos dados que deseja alterar: ");
					scanf("%d",&consulta);	
					if(consulta>10){
						printf("Id inexistente!!");
						system("pause>null");
					}
					if(consulta<=10){
				printf("Digite seu Ra: ");
					scanf("%d",&RNC[consulta].Ra);
				printf("Digite seu Nome: ");
					fflush(stdin);
					gets(RNC[consulta].Nome);
				printf("Digite seu CPF: ");
					scanf("%d",&RNC[consulta].CPF);
				}	

				system("cls");
				break;
			case 5:
				break;
				
		}
	}
}

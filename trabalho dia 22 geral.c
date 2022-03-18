char alterar(char nome[], char la, char ln){
	int i;
	for(i=0;nome[i]!='\0';i++)
	{
		if(nome[i]==la)
		{
			nome[i]=ln;
		}
	}
	printf("%s",nome);
}

char remover (char nome[])
{
	int i=0;
	for(i=0;nome[i]!='\0';i++)
	{
	
		switch (nome[i])
		{
			case 'a':
			{
				break;
			}
			
			case 'e':
			{
				break;
			}
			
			case 'i':
			{	
				break;
			}
			
			case 'o':
			{	
				break;
			}
				
			case 'u':
			{
				break;
			}
			
			default:
			{
				printf("%c",nome[i]);
				break;	
			}
		}	
	}
}


char alfabetica (char nome[], char nome2[])
{
	if(nome[0]<nome2[0])
	{
		printf("%s vem na frente de %s.",nome, nome2);
	}
	else if(nome2[0]<nome[0])
	{
		printf("%s vem na frente de %s.",nome2, nome);
	}else
	{
		printf("Os nome são iguais.");
	}
}

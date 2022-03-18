char ordem (char palavra[],char nome2[]){
	int u=0;
	for(u=0;palavra[u]!='\0';u++){
	if(palavra[u]<nome2[u]){
		printf("%s vem primeiro que %s na ordem alfabetica ",palavra[u],nome2[u]);
		break;
		}
	if(palavra[u]>nome2[u]){
	printf("%s vem primeiro que %s na ordem alfabetica ",nome2[u],palavra[u]);	
	break;
		}
	else{
	}
	}
}


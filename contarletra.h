int contarletras (char P[],char L){
	int c=0,soma=0;
	while(P[c]!='\0'){
		if(P[c]==L){
			soma++;
	}
	c++;
	}	
	return soma;
}

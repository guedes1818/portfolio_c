#include  <stdio.h>
#include  <string.h>

int main(){
	char firstname[100] = "Paulo";
	char lastname[100] = "Miranda";
	char nome [100];
	
	// imprime o tamanho (5)
	printf("%d\n",strln(firstname));
	
	// imprime o tamanho (7)
	printf("%d\n",(lastname));
	
	// copia firstname 
	printf("%d\n", strlen (lastname));
	
	//adiciona espaço em branco
	strcat(nome, " ");
	
	// copia lastname
	strcat(nome,lastname);
	//imprime tamanho (13)
	printf("%d\n",strlen(nome));
	
	printf("Nome: %s\n",nome);
	return 0;	
}














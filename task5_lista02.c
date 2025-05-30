#include <stdio.h>

 int functionSomadosNumeros(int v1,int v2,int v3,int v4,int v5){
	int resultado;
	resultado = v1+ v2 + v3 +v4 + v5;
	return (resultado);
}



int main(){
	int i, v1, v2, v3, v4 , v5,resultado;
	
	while(i <=100){
		printf("Digite o primeiro numero: \n");
		scanf("%d", &v1);
		printf("Digite o segundo  numero: \n");
		scanf("%d", &v2);
		printf("Digite o terceiro numero: \n");
		scanf("%d", &v3);
		printf("Digite o quarto numero: \n");
		scanf("%d", &v4);
		printf("Digite o quinto numero: \n");
		scanf("%d", &v5);
		break;}
		
		resultado = functionSomadosNumeros(v1,v2,v3,v4,v5);
		printf("O resultado da soma dos numeros eh: %d ", functionSomadosNumeros);
	}
	
	return 0;
}

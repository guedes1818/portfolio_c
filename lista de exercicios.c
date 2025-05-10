#include <stdio.h>

#define tam 20

int main(){
	int numeros[tam];
	int i;
	int maior, menor,soma=0;
	
	for( i = 0; i < tam; i++){
			numeros [i] = 0;
			printf("Digite qualquer numero  %numero: \n",i+i);
			scanf("%d", &numeros[i]);
}
	maior = numeros[0];
	menor = numeros[0];
	soma  += numeros[0];
	
	for (i = 1; i<tam; i++){
		if(numeros[i]> maior)
		{
			maior = numeros[i];
		}
		
		if(numeros[i] <menor)
		{
			menor = numeros[i];
		}	
			soma += numeros[i];	
		}
			printf("\n");
		printf("O maior elemento e igual a %.2d",maior);
		
		printf("\n");
		printf("O menor elemento e igual a %.2d",menor);
		
		printf("\n");
		printf("O e a soma dos  elementos e igual a %.2d",soma);


return 0;	
	
	}

	




#include <stdio.h>


int Parouimpar(int num){
	
 return num % 2 ==0;
}

int main(){
	int num;
	printf("Digite um numero:\n");
	scanf("%d", &num);
	
	if (Parouimpar(num)){
		printf("\n");
		printf("O Numero %d eh PAR \n \n ",num);
	}
	else{
		printf("\n");
		printf("O Numero %d eh Impar \n \n ",num);
	}
}


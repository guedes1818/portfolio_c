#include <stdio.h>

 int Calculafatorial(int numero){
 	
 	int fat;
	fat = 1;
 	
	while (numero>1){
		fat = fat *numero;
		numero = numero - 1;
	}
 	
	return fat;
 }


int main(){
int n;
int fatorial;

	printf("Digite um numero de 0 a 60: \n");
	scanf("%d", &n);
	
	
	fatorial = Calculafatorial(n);
	printf("\n fatorial = %d", fatorial);

return 0;
	
}


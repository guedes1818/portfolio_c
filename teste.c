#include <stdio.h>

int main(){
	float n1,n2;
	float resultado;
	char operacao;
	

	
		
	printf("Digite qual a operação que desejas fazer: \n");
	printf("----    +| - | * | / | -------     \n");
	scanf("%c", &operacao);
	
	printf("Digite o primeiro numero: \n");
	scanf("%f", &n1);
	
	printf("Digite o segundo numero: \n");
	scanf("%f", &n2);
	
	
	switch(operacao){
		case '+':
			resultado = n1+n2;
			printf("A OPCAO SOMA FOI ESCOLHIDA");
			printf("O RESULTADO DA OPERAcaoO DA SOMA EH IGUAL A: %f ", resultado);
			break;
        case'-':
        	resultado = n1-n2;
        	printf("A OPCAO SUBTRACAO FOI ESCOLHIDA");
        	printf("O RESULTADO DA OPERACAO DA SOMA EH IGUAL A : %f", resultado);
        	break;
        case'*':
        	resultado = n1*n2;
        	printf("A OPCAO MULTIPLICACAO FOI ESCOLHIDA");
        	printf("O RESULTADO DA OPERACAO EH IGUAL A : %f", resultado);
        	break;
        default:
        	printf("A calculadora nao recebeu nenhum operador, sinalize o operador da equacao.");
        	break;
        	
        
	}
	
	return 0;
	
}


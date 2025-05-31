#include <stdio.h>

int main() {
    char operacao;
    double numero1, numero2, resultado;

    // opera��o
    printf("Bem-vindo � calculadora!\n");
    printf("Digite a opera��o que deseja fazer (+, -, /, *): ");
    scanf(" %c", &operacao);  // espa�o antes do %c para ignorar enter pendente

    // n�mero1
    printf("Digite o primeiro n�mero: ");
    scanf("%lf", &numero1);  // %lf para double

    // n�mero2
    printf("Digite o segundo n�mero: ");
    scanf("%lf", &numero2);  // %lf para double

    // estrutura condicional
    switch (operacao) {
        case '+':
            resultado = numero1 + numero2;
            break;
        case '-':
            resultado = numero1 - numero2;
            break;
        case '*':
            resultado = numero1 * numero2;
            break;
        case '/':
            if (numero2 != 0) {
                resultado = numero1 / numero2;
            } else {
                printf("Erro: Divisao por zero nao � permitida!\n");
                return 1;  // encerra o programa com erro
            }
            break;
        default:
            printf("Erro: Voc� digitou uma opera��o inv�lida!\n");
            return 0;  // encerra o programa com erro
    }

    // Exibir resultado
    printf("Operacao: %c, Numero 1: %.2lf, Numero 2: %.2lf, Resultado: %.2lf\n", operacao, numero1, numero2, resultado);

    return 0;
}


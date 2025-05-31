#include <stdio.h>

int main() {
    char operacao;
    double numero1, numero2, resultado;

    // operação
    printf("Bem-vindo à calculadora!\n");
    printf("Digite a operação que deseja fazer (+, -, /, *): ");
    scanf(" %c", &operacao);  // espaço antes do %c para ignorar enter pendente

    // número1
    printf("Digite o primeiro número: ");
    scanf("%lf", &numero1);  // %lf para double

    // número2
    printf("Digite o segundo número: ");
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
                printf("Erro: Divisao por zero nao é permitida!\n");
                return 1;  // encerra o programa com erro
            }
            break;
        default:
            printf("Erro: Você digitou uma operação inválida!\n");
            return 0;  // encerra o programa com erro
    }

    // Exibir resultado
    printf("Operacao: %c, Numero 1: %.2lf, Numero 2: %.2lf, Resultado: %.2lf\n", operacao, numero1, numero2, resultado);

    return 0;
}


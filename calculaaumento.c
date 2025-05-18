#include <stdio.h>

int main() {
    float salario = 1000.0;
    float aumento = 0.015;
    int ano;

    for (ano = 2018; ano <= 2025; ano++) {
        salario += salario * aumento;
        aumento *= 2;
    }

    printf("Salário em 2025 (for): R$ %.2f\n", salario);
    return 0;
}


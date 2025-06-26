#include <stdio.h>

int main() {
    int original[10], crescente[10], decrescente[10], quadrados[10];
    int i, j;

    printf("Digite os 10 primeiros numeros:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &original[i]);
    }
    for (i =0;i<10;i++) {
        crescente[i] = original[i];

    }
    for (i=0;i<10;i++){
        for (j=0;j<9 -i; j++) {
            if (crescente[j] > crescente[j+1]) {
                crescente[j]     = crescente[j] + crescente[j + 1];
                crescente[j + 1] = crescente[j] - crescente[j + 1];
                crescente[j]     = crescente[j] - crescente[j + 1];

            }
        }
    }
    for (i = 0; i < 10; i++) {
        decrescente[i] = crescente[9 - i];
    }

    for (i = 0; i < 10; i++) {
        quadrados[i] = original[i] * original[i];
    }

    printf("\nVetor original: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", original[i]);
    }

    printf("\nVetor em ordem crescente: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", crescente[i]);
    }

    printf("\nVetor em ordem decrescente: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", decrescente[i]);
    }

    printf("\nVetor de quadrados: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", quadrados[i]);
    }

    printf("\n");
    return 0;
}


#include <stdio.h>
#define N 10

// Pilha
int pilha[N];
int t = 0;

// Filas
int filapar[N];
int filaimpar[N];
int p1 = 0, u1 = 0; // fila par
int p2 = 0, u2 = 0; // fila impar

// Função para empilhar
void empilhar(int valor) {
    if (t < N) {
        pilha[t++] = valor;
        printf("Empilhado: %d\n", valor);
    } else {
        printf("Pilha cheia!\n");
    }
}

// Função para enfileirar
void enfileirar(int valor) {
    if (valor % 2 == 0) {
        if (u1 < N)
            filapar[u1++] = valor;
        else
            printf("Fila PAR cheia!\n");
    } else {
        if (u2 < N)
            filaimpar[u2++] = valor;
        else
            printf("Fila ÍMPAR cheia!\n");
    }
}

// Mostrar estruturas
void mostrar() {
    int i;
    
    printf("\nPilha: ");
    for (i = 0; i < t; i++)
        printf("%d ", pilha[i]);

    printf("\nFila Par: ");
    for (i = p1; i < u1; i++)
        printf("%d ", filapar[i]);

    printf("\nFila Impar: ");
    for (i = p2; i < u2; i++)
        printf("%d ", filaimpar[i]);

    printf("\n");
}

int main() {
    int valor, opcao;

    do {
        printf("\n--- MENU ---\n");
        printf("1 - Inserir número\n");
        printf("2 - Mostrar estruturas\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite um numero: ");
                scanf("%d", &valor);
                empilhar(valor);
                enfileirar(valor);
                break;

            case 2:
                mostrar();
                break;

            case 0:
                printf("Encerrando...\n");
                break;

            default:
                printf("Opção inválida!\n");
        }

    } while (opcao != 0);

    return 0;
}




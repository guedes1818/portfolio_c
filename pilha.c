#include <stdio.h>
#include <stdlib.h> // Necessário para a função system("cls") ou system("clear")

#define MAX 5

int pilha[MAX];
int t = 0;

int vazia() {
    return (t == 0);
}

int cheia() {
    return (t == MAX);
}

void empilhar(int valor) {
    if (cheia()) {
        printf("\nErro: Pilha cheia! Nao e possivel empilhar %d.\n", valor);
    } else {
        pilha[t] = valor;
        t++;
        printf("\nValor %d empilhado com sucesso.\n", valor);
    }
}

int desempilhar() {
    int valor_desempilhado = -1;
    if (vazia()) {
        printf("\nErro: Pilha vazia! Nao e possivel desempilhar.\n");
    } else {
        t--;
        valor_desempilhado = pilha[t];
        printf("\nValor %d desempilhado.\n", valor_desempilhado);
    }
    return valor_desempilhado;
}

void imprimirPilha() {
    int i;
    
    if (vazia()) {
        printf("\nA pilha esta vazia.\n");
    } else {
        printf("\nConteudo da pilha (topo -> base):\n");
        for (i = t - 1; i >= 0; i--) {
            printf("| %d |\n", pilha[i]);
        }
        printf("-----\n");
    }
}

void exibirMenu() {
    printf("\n--- Menu da Pilha ---\n");
    printf("1. Empilhar (Push)\n");
    printf("2. Desempilhar (Pop)\n");
    printf("3. Imprimir Pilha\n");
    printf("4. Sair\n");
    printf("Escolha uma opcao: ");
}

int main() {
    int opcao;
    int valor;
    
    do {
        // system("cls"); // Descomente esta linha se estiver no Windows
        // system("clear"); // Descomente esta linha se estiver no Linux/macOS
        
        exibirMenu();
        
        if (scanf("%d", &opcao) != 1) {
            // Limpa o buffer de entrada para evitar loop infinito em caso de entrada invalida
            while (getchar() != '\n');
            opcao = 0; // Define uma opção inválida
        }
        
        switch (opcao) {
            case 1:
                printf("Digite o valor para empilhar: ");
                if (scanf("%d", &valor) == 1) {
                    empilhar(valor);
                } else {
                    printf("\nErro: Entrada invalida para o valor.\n");
                    while (getchar() != '\n'); // Limpa o buffer
                }
                break;
                
            case 2:
                desempilhar();
                break;
                
            case 3:
                imprimirPilha();
                break;
                
            case 4:
                printf("\nEncerrando o programa.\n");
                break;
                
            default:
                printf("\nOpcao invalida. Tente novamente.\n");
                break;
        }
        
        if (opcao != 4) {
            printf("\nPressione ENTER para continuar...");
            // Garante que a linha atual seja consumida (se houver) e espera por ENTER
            while (getchar() != '\n'); 
            getchar(); // Espera pela tecla ENTER
        }
        
    } while (opcao != 4);
    
    system("cls");
    return 0;
}

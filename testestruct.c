#include <stdio.h>
#include <string.h>

int main() {
    typedef struct {
        char nome[100];
        int numero;
        float valor;
    } NOTA;

    NOTA DaviNota[3];

   
    DaviNota[0].numero = 1;
    DaviNota[0].valor = 7.2;
    strcpy(DaviNota[0].nome, "Davi");

    DaviNota[1].numero = 2;
    DaviNota[1].valor = 8.5;
    strcpy(DaviNota[1].nome, "#");

    DaviNota[2].numero = 3;
    DaviNota[2].valor = 9.0;
    strcpy(DaviNota[2].nome, "#");

    int i;
    for (i = 0; i < 3; i++) {
        printf("\nAluno: %s\n", DaviNota[i].nome);
        printf("Nº %d = %.2f\n", DaviNota[i].numero, DaviNota[i].valor);
    }

    return 0;
}


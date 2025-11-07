#include <stdio.h>

typedef struct pilha {
    int valor;
    struct pilha *prox;
} PILHA;


int main() {
 	PILHA elemento1;
 	elemento1.valor =10;
 	elemento1.prox= NULL;
 	
 	PILHA elemento2;
 	elemento2.valor = -5;
	elemento2.prox = &elemento1;
	
	PILHA elemento3;
 	elemento3.valor = 90;
	elemento3.prox = &elemento2;
	
	printf("elemento1 = %d, elemento1 =%p,aponta prox= %p.\n",
	elemento1.valor,&elemento1,elemento1.prox);
	printf("elemento2 = %d, elemento2 =%p,aponta prox= %p.\n",
	elemento2.valor,&elemento1,elemento2.prox);
	printf("elemento3 = %d, elemento3 =%p,aponta prox= %p.\n",
	elemento3.valor,&elemento3,elemento3.prox);
	
    return 0;
}


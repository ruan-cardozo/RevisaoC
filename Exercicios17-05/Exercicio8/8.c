/*
8)Faça um programa para colocar três números em ordem crescente. 
Deve ter uma função para fazer a troca dos valores, use uma função usando 
passagem de parâmetro por referência. 
*/

#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b);
//função que faz a troca entre os dois numeros

void troca(int *a, int *b) {
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}


int main(void) {
    int a, b, c;
    int *pa, *pb, *pc;

    pa = &a;
    pb = &b;
    pc = &c;

    printf("Digite o primeiro número: ");
    scanf("%i", &a);

    printf("Digite o segundo número: ");
    scanf("%i", &b);

    printf("Digite o terceiro número: ");
    scanf("%i", &c);

    if(*pa > *pb) {
        troca(pa, pb);
    }

    if(*pb > *pc) {
        troca(pb, pc);
    }

    if(*pa > *pb) {
        troca(pa, pb);
    }

    printf("Ordem crescente: %i, %i, %i\n", *pa, *pb, *pc);

    system("pause");

    return 0;
}


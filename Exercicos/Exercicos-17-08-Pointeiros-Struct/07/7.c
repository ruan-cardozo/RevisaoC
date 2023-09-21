/*
7)Faça um programa que peça um número para calcular o fatorial. 
Deve tem uma função para calcular o fatorial (por referência). 
*/

#include <stdio.h>
#include <stdlib.h>

void fatorial(int *n);

int main(void) {
    int n;

    printf("Digite um número: ");
    scanf("%i", &n);

    fatorial(&n);

    printf("Fatorial: %i\n", n);

    system("pause");

    return 0;
}

void fatorial(int *n) {
    int i, fatorial = 1;

    for(i = 1; i <= *n; i++) {
        fatorial *= i;
    }

    *n = fatorial;
}


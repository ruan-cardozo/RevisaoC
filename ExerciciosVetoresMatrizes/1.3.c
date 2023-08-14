/*
1. **Soma dos Elementos:** Crie um programa que calcule a soma de 
todos os elementos em um vetor de inteiros.
*/

#include <stdlib.h>
#include <stdio.h>

typedef struct Numero
{
    float Valor;
}Valor;

int main(void) {
    struct Numero numeros[5] = {{5.5}, {4.3}, {3.7}, {2.1}, {1.6}};
    float soma = 0;    

    for (int i = 0; i < 5; i++)
    {
        soma += numeros[i].Valor;
    }

    printf("A soma dos vetores e: %f\n\n\n", soma);
    
}

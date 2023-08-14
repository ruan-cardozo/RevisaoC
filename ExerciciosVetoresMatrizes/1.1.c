/*
1. **Soma dos Elementos:** Crie um programa que calcule a soma de 
todos os elementos em um vetor de inteiros.
*/

// USANDO DADO ESTRUTURADO

#include <stdlib.h>
#include <stdio.h>

struct Numero {
    int valor;
}valor;

int main(void){
    //array de struct
    struct Numero numeros[5] = {{10}, {20}, {30}, {40} ,{50}};
    int soma = 0;

    for (int i = 0; i < 5; i++){
        soma += numeros[i].valor;
    }

    printf("A soma dos vetores e: %d\n\n\n", soma);
}
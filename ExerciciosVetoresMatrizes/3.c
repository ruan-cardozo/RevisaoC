/*
Números Pares: Desenvolva um programa que conte 
quantos números pares existem em um vetor de inteiros.
 */

#include <stdio.h>
#include <stdlib.h>

int main () {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];
    int contador = 0;
    printf("Digite os valores do vetor: \n");
    for (int i = 0; i < tamanho; i++)
    {   
        printf("Elemento: \n");
        scanf("%d", &vetor[i]);
    }
        
    for (int i = 0; i < tamanho; i++)
    {
      if(vetor[i] % 2 == 0) {
        contador++;
      }
      
    }
    
    printf("O vetor possui %d numero(s) pare(s).\n", contador);
    return 0;
}
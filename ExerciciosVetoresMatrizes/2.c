/*
Maior e Menor Valor: Escreva um programa que 
encontre o maior e o menor valor em um vetor de números inteiros.
*/

#include <stdio.h>

int main() {
    int tamanho; //variavel para armazenar o tamanho do vetor
    printf("Digite o tamanho do vetor: ");//input no cmd
    scanf("%d", &tamanho); //leitura da variavel
    
    int vetor[tamanho]; //com base no tamanho recebido, eu crio meu vetor
    printf("Digite os elementos do vetor:\n");//apenas input de tela
        /*
    for (inicialização; condição; incremento) {
    // Código a ser executado a cada iteração
    }*/
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
    
    int maior = vetor[0];
    int menor = vetor[0];
    
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    
    return 0;
}

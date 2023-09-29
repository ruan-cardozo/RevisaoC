/*
PROCESSO AVALIATIVO N3 – ESTRUTURA DE DADOS
EQUIPE
NOMES: João David, Ruan Cardozo, Thiago Saraiva.

CONSEGUIU CHEGAR NO RESULTADO?
R: Sim
SE NÃO, POR QUE NÃO CONSEGUIU CHEGAR NO RESULTADO?
R.:
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 10000

void geraNumero(int *vet, int op) {
    int i, j;

    switch (op) {
        case 1: // Ordenados
            for (i = 0; i < TAMANHO; i++) {
                vet[i] = i + 1;
            }
            break ;
        case 2: // Invertidos
            for (i = 0; i < TAMANHO; i++) {
               vet[i] = TAMANHO - i;
            }
            break;
        case 3: // Aleatórios
            for (i = 0; i < TAMANHO; i++) {
                vet[i] = (int) (rand() % TAMANHO);
            }
            break;
    }
}

void troca(int arr[], int i, int j, int *qtd_trocas) {
    int aux;
    aux = arr[i];
    arr[i] = arr[j];
    arr[j] = aux;
    (*qtd_trocas)++;
}

int particao(int x[], int p, int r, int *qtd_comparacoes, int *qtd_trocas) {
    int pivo, i, j;
    pivo = x[(p + r) / 2];
    i = p - 1;
    j = r + 1;
    while (1) {
        do {
            j--;
            (*qtd_comparacoes)++;
        } while (x[j] > pivo);
        do {
            i++;
            (*qtd_comparacoes)++;
        } while (x[i] < pivo);
        if (i < j) {
            troca(x, i, j, qtd_trocas);
        } else {
            return j;
        }
    }
}

void quicksort(int arr[], int p, int r, int *qtd_comparacoes, int *qtd_trocas) {
    int q;
    if (p < r) {
        q = particao(arr, p, r, qtd_comparacoes, qtd_trocas);
        quicksort(arr, p, q, qtd_comparacoes, qtd_trocas);
        quicksort(arr, q + 1, r, qtd_comparacoes, qtd_trocas);
    }
}

int main() {
    int arr[TAMANHO];
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int qtd_trocas = 0;
    int qtd_comparacoes = 0;

    // Chama a função para gerar os números de acordo com a opção escolhida
    geraNumero(arr, 1);

    // Ponto do algoritmo para iniciar o cálculo do tempo de execução
    float tempo_inicial = clock();

    // Ordenando o vetor de forma crescente
    quicksort(arr, 0, arr_size - 1, &qtd_comparacoes, &qtd_trocas);

    // Mostrando o vetor ordenado
    // printf("\n\nEm ordem:\n\n");
    // for (i = 0; i < 10; i++) {
    //     printf(" %d", x[i]);
    // }

    // Ponto do algoritmo para calcular o tempo de execução
    float tempo_final = clock() - tempo_inicial;

    printf("Algoritmo de ordenacao Quick Sort: \n");
    printf("\nQuantidade de comparacoes: %d\n", qtd_comparacoes);
    printf("Quantidade de trocas: %d\n", qtd_trocas);
    printf("Tempo de execucao do algoritmo: %.3f\n", tempo_final / 1000);

    return 0;
}

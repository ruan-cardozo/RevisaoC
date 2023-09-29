/*
PROCESSO AVALIATIVO N3 – ESTRUTURA DE DADOS
EQUIPE
NOMES:
CONSEGUIU CHEGAR NO RESULTADO?
R:
SE NÃO, POR QUE NÃO CONSEGUIU CHEGAR NO RESULTADO?
R.:
*/
#include <stdio.h>
#include <stdlib.h> // Adicionando a biblioteca "stdlib.h" para usar a função "rand"
#include <time.h>
#define TAMANHO 10000

// Protótipo de Função
void geraNumero(int *vet, int op);
void bubbleSort(int *vet);
void imprimirVetor(int *vet);

int main(void) {
    // Variáveis
    int vet1[TAMANHO];

    // Entrada de dados
    geraNumero(vet1, 3);

    // Processamento dos dados
    bubbleSort(vet1);

    // Saída de dados
    return 0;
}

// Função geração de números
void geraNumero(int *vet, int op) {
    int i, j;
    switch (op) {
        case 1: // Ordenados
            for (i = 0; i < TAMANHO; i++) {
                vet[i] = i + 1;
            }
            break; // Corrigido para "break" (letra minúscula)

        case 2: // Invertidos
            for (i = 0; i < TAMANHO; i++) {
                vet[i] = TAMANHO - i;
            }
            break;

        case 3: // Aleatórios
            srand(time(NULL)); // Inicialize a semente randômica com a hora atual
            for (i = 0; i < TAMANHO; i++) {
                vet[i] = rand() % TAMANHO;
            }
            break;
    }
}

// Função ordenação bubble sort
void bubbleSort(int *vet) {
    int n, troca, i, aux, qtd_trocas, qtd_comparacoes;
    n = 1;
    troca = 1;
    qtd_trocas = 0;
    qtd_comparacoes = 0;

    // Ponto do algoritmo para iniciar o tempo de execução
    float tempo_inicial = clock();

    while (n <= TAMANHO && troca == 1) {
        troca = 0;
        for (i = 0; i <= TAMANHO - 2; i++) {
            // Ponto do algoritmo para contar as comparações
            qtd_comparacoes++;
            if (vet[i] > vet[i + 1]) {
                // Ponto do algoritmo para contar as trocas
                qtd_trocas++;
                aux = vet[i];
                vet[i] = vet[i + 1];
                vet[i + 1] = aux;
                troca = 1;
            }
        }
        n = n + 1;
    }

    // Ponto do algoritmo para calcular o tempo de execução
    float tempo_final = (clock() - tempo_inicial) / CLOCKS_PER_SEC; // Corrigido para calcular em segundos

    // Saída de dados
    printf("Quantidade de trocas: %i\n", qtd_trocas);
    printf("Quantidade de comparacoes: %i\n", qtd_comparacoes);
    printf("Tempo de execucao do algoritmo: %.3f segundos\n", tempo_final);
}

// Função impressão do vetor
void imprimirVetor(int *vet) {
    int i;
    for (i = 0; i < TAMANHO; i++) { // Corrigido "For" para "for" (letra minúscula)
        printf("%i, ", vet[i]);
        if ((i + 1) % 14 == 0) {
            printf("\n");
        }
    }
}

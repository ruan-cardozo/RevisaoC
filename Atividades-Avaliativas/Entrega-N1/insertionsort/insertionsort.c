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
#include <time.h>
#include<stdlib.h>

#define TAMANHO 10

// Prototipo de Função
void geraNumero(int *vet, int op);
void insertSort(int *vet);
void imprimirVetor(int *vet);

int main (void){
	// Variáveis
	int vet1[TAMANHO];

// Entrada de dados;
geraNumero(vet1,1);
// printf("Desordenado: \n\n");
// imprimirVetor(vet1);

// Processamentos dos dados
insertSort(vet1);

// Saída de dados
// printf("\n\nOrdenado: \n\n");
//imprimirVetor(vet1);
return 0;
}

// Função geração de números
void geraNumero(int *vet, int op) {
    int i;

    switch (op) {
        case 1: // Ordenados
            for (i = 0; i < TAMANHO; i++) {
                vet[i] = i + 1;
            }
            break ;
        case 2: //Invertidos
            for (i = 0; i < TAMANHO; i++) {
               vet[i] = TAMANHO-i;
            }
            break;
        case 3: // Aleatórios
            for (i = 0; i < TAMANHO; i++) {
                vet[i] = (int) (rand() % TAMANHO);
            }
            break;
    }

}

// Função ordenação insert sort
void insertSort(int *vet){
	int eleito, i, j, qtd_trocas, qtd_comparacoes;
	
	eleito = 0;
    qtd_trocas = 0;
    qtd_comparacoes = 0;
	
	// Ponto do algoritmo para iniciar o tempo de execução
	float tempo_inicial = clock();
    for (i = 1; i <= TAMANHO - 1; i++) {
        eleito = vet[i];
        j = i - 1; 
		qtd_comparacoes++; 
		qtd_trocas++;
        while (j >= 0 && vet[j] > eleito) {        	
            vet[j + 1] = vet[j];
            j = j - 1;
            qtd_comparacoes++;
            qtd_trocas++;
        }
        vet[j + 1] = eleito;
		qtd_trocas++;		        
    }

    // Ponto do algoritmo para calcular o tempo de execução
    float tempo_final = clock() - tempo_inicial;
    
    // Saída de dados
    printf("Algoritmo de ordenacao Insertion Sort: \n");
	printf("\nQuantidade de comparacoes: %i\n", qtd_comparacoes);
    printf("Quantidade de trocas: %i\n", qtd_trocas);
    printf("Tempo de execucao do algoritmo: %.3f", tempo_final/1000);
}


// Função impressão do vetor
void imprimirVetor(int *vet){
	int i;
	for (i = 0; i < TAMANHO; i++){
		printf("%i, ", vet[i]);
		if ((i+1)%14 == 0){
			printf("\n");
		}
	}
}
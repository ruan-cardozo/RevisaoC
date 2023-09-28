/*
PROCESSO AVALIATIVO N3 – ESTRUTURA DE DADOS
EQUIPE
NOMES:
CONSEGUIU CHEGAR NO RESULTADO?
R:
SE NÃO, POR QUE NÃO CONSEGUIU CHEGAR NO RESULTADO?
R.:
*/

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
#include<stdlib.h>
#include <time.h>
#include<math.h>

#define TAMANHO 10000

// Prototipo de Função
void geraNumero(int *vet, int op);
void quicksort(int *vet, int ini, int fim, int *qtd_trocas, int *qtd_comparacoes);
int partition(int *vet, int ini, int fim, int *qtd_trocas, int *qtd_comparacoes);
void imprimirVetor(int *vet);

int main (void){
	// Variáveis
	int vet1[TAMANHO];	
    int qtd_trocas = 0;
    int qtd_comparacoes = 0;

//Chama a função para gerar o array de acordo com a necessidade 1-Ordenado, 2-Invertido e 3-Aleatório
geraNumero(vet1, 1);

// printf("Desordenado: \n\n");
// imprimirVetor(vet1);

// Ponto do algoritmo para iniciar o calculo do tempo de execução
	float tempo_inicial = clock();

// Processamentos dos dados
quicksort(vet1, 0, TAMANHO - 1, &qtd_trocas, &qtd_comparacoes);

// Ponto do algoritmo para calcular o tempo de execução
	float tempo_final = clock() - tempo_inicial;

// Saída de dados
    printf("Algoritmo de ordenacao Quick Sort: \n");
	printf("\nQuantidade de comparacoes: %i\n", qtd_comparacoes);
    printf("Quantidade de trocas: %i\n", qtd_trocas);
    printf("Tempo de execucao do algoritmo: %.3f", tempo_final/1000);

// Saída de dados
// printf("\n\nOrdenado: \n\n");
//imprimirVetor(vet1);
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

// Função ordenação bubble sort
void quicksort(int *vet, int ini, int fim, int *qtd_trocas, int *qtd_comparacoes) {
    int meio;

    if (ini < fim) {
        meio = partition(vet, ini, fim, qtd_trocas, qtd_comparacoes);	
        quicksort(vet, ini, meio, qtd_trocas, qtd_comparacoes);
        quicksort(vet, meio + 1, fim, qtd_trocas, qtd_comparacoes);
    }
}

int partition(int *vet, int ini, int fim, int *qtd_trocas, int *qtd_comparacoes) {
    int pivo, topo, i;
    pivo = vet[ini];
    topo = ini;

    for (i = ini + 1; i <= fim; i++) {
        if (vet[i] < pivo) {
		    vet[topo] = vet[i];		    
            vet[i] = vet[topo + 1];            
            topo++;
            (*qtd_trocas)++;            
        }
        (*qtd_comparacoes)++;        
    }
    
    vet[topo] = pivo;
    
    return topo;
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

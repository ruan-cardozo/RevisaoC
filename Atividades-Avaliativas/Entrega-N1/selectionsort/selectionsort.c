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
#include <time.h>

#define TAMANHO 10000

// Prototipo de Função
void geraNumero(int *vet, int op);
void selectSort(int *vet);
void imprimirVetor(int *vet);

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

// Função ordenação insert sort
void selectSort(int *vet){
	int eleito, i, j, menor, pos, qtd_trocas, qtd_comparacoes;
	
	eleito = 0;
    qtd_trocas = 0;
    qtd_comparacoes = 0;
	
	// Ponto do algoritmo para iniciar o tempo de execução
	float tempo_inicial = clock();
	
    for (i = 0; i <= TAMANHO - 2; i++) {
        eleito = vet[i];
        menor = vet[i + 1];
        pos = i + 1;        
        for (j = i + 2; j <= TAMANHO - 1; j++) {        	        	
            if (vet[j] < menor) {            	  
                menor = vet[j];
                pos = j;
                								
            }
            qtd_comparacoes++;
            
        }        
        if (menor < eleito) {        	
            vet[i] = vet[pos];
            vet[pos] = eleito;
            qtd_trocas++;
            
        }
        qtd_comparacoes++;
        qtd_trocas++;        
    }



    // Ponto do algoritmo para calcular o tempo de execução
    float tempo_final = clock() - tempo_inicial;
    
    // Saída de dados
    printf("Algoritmo de ordenacao Selection Sort: \n");
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


int main (void){
	// Variáveis
	int vet1[TAMANHO];

// Entrada de dados;
geraNumero(vet1,3);
// printf("Desordenado: \n\n");
// imprimirVetor(vet1);

// Processamentos dos dados
selectSort(vet1);

// Saída de dados
// printf("\n\nOrdenado: \n\n");
//imprimirVetor(vet1);
return 0;
}
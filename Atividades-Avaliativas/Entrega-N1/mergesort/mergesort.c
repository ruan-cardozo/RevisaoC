#include <stdio.h>
#include<stdlib.h>
#include <time.h>

#define TAMANHO 10000

void geraNumero(int *vet, int op);
void merge(int arr[], int left, int middle, int right, int *qtd_trocas, int *qtd_comparacoes);
void mergeSort(int arr[], int left, int right, int *qtd_trocas, int *qtd_comparacoes);

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

void merge(int arr[], int left, int middle, int right, int *qtd_trocas, int *qtd_comparacoes) {
    int i, j, k;
    int n1 = middle - left + 1;
    int n2 = right - middle;

    // Cria arrays temporários
    int L[n1], R[n2];

    // Copia os dados para os arrays temporários L[] e R[]
    for (i = 0; i < n1; i++){	
        L[i] = arr[left + i];      
    }
    
    for (j = 0; j < n2; j++){	
        R[j] = arr[middle + 1 + j];
    }

    // Mescla os arrays temporários de volta no array original arr[]
    i = 0; // Índice inicial do primeiro subarray
    j = 0; // Índice inicial do segundo subarray
    k = left; // Índice inicial do array resultante
    while (i < n1 && j < n2) {		            	
        if (L[i] <= R[j]) {        	
            arr[k] = L[i];
            i++;
            (*qtd_trocas)++;
            (*qtd_comparacoes)++;            
        } else {        	
            arr[k] = R[j];
            j++;
            (*qtd_trocas)++;
            (*qtd_comparacoes)++; 
        }        
        k++;
        //(*qtd_trocas)++;        
    }

    // Copia os elementos restantes de L[], se houver algum
    while (i < n1) {    	
        arr[k] = L[i];
        i++;
        k++;
        (*qtd_trocas)++;        
    }

    // Copia os elementos restantes de R[], se houver algum
    while (j < n2) {    	
        arr[k] = R[j];
        j++;
        k++;
        (*qtd_trocas)++;
    }
}

void mergeSort(int arr[], int left, int right, int *qtd_trocas, int *qtd_comparacoes) {
    if (left < right) {
        // Encontra o ponto médio do array
        int middle = left + (right - left) / 2;

        // Ordena a primeira metade
        mergeSort(arr, left, middle, *&qtd_trocas, *&qtd_comparacoes);

        // Ordena a segunda metade
        mergeSort(arr, middle + 1, right, *&qtd_trocas, *&qtd_comparacoes);

        // Mescla as duas metades ordenadas
        merge(arr, left, middle, right, *&qtd_trocas, *&qtd_comparacoes);
    }
}

int main() {
    int arr[TAMANHO];
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int qtd_trocas = 0;
    int qtd_comparacoes = 0;

    /*printf("Array original: \n");
    for (int i = 0; i < arr_size; i++) {
        printf("%d ", arr[i]);
    }*/
    
    //Chama a função para gerar o array de acordo com a necessidade 1-Ordenado, 2-Invertido e 3-Aleatório
    geraNumero(arr, 3);
    
	// Ponto do algoritmo para iniciar o calculo do tempo de execução
	float tempo_inicial = clock();

    // Chama a função Merge Sort
    mergeSort(arr, 0, arr_size - 1, &qtd_trocas, &qtd_comparacoes);

    /*printf("\nArray ordenado: \n");
    for (int i = 0; i < arr_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");*/
    
    // Ponto do algoritmo para calcular o tempo de execução
	float tempo_final = clock() - tempo_inicial;
    
    printf("Algoritmo de ordenacao Merge Sort: \n");
	printf("\nQuantidade de comparacoes: %i\n", qtd_comparacoes);
    printf("Quantidade de trocas: %i\n", qtd_trocas);
    printf("Tempo de execucao do algoritmo: %.3f\n", tempo_final/1000);

    return 0;
}

#include <stdio.h> 

void quicksort(int vet[], int ini, int fim) { 
    int meio; 
    if (ini < fim) { 
        meio = partition(vet, ini, fim); 
        quicksort(vet, ini, meio); 
        quicksort(vet, meio + 1, fim); 
    } 
}
int partition(int vet[], int ini, int fim) { 
    int pivo, topo, i; 
    pivo = vet[ini]; 
    topo = ini;
    for (i = ini + 1; i <= fim; i++) { 
        if (vet[i] < pivo) { 
            vet[topo] = vet[i]; 
            vet[i] = vet[topo + 1]; 
            topo++; 
        } 
    } 
    vet[topo] = pivo; 
    return topo; 
} 
 
int main(void) { 
    int x[5]; 
    int i, j, eleito, menor, pos; 
    for (i = 0; i <= 4; i++) { 
        printf("Digite o %i numero: ",i+1); 
        scanf("%i,",&x[i]); 
        fflush(stdin); 
    } 
    
quicksort(x, 0, 4);
    printf("\n\nEm ordem:\n\n"); 
    for (i = 0; i <= 4; i++) { 
        printf("%i numero: %i\n",i+1,x[i]); 
    } 
    return 0; 
} 
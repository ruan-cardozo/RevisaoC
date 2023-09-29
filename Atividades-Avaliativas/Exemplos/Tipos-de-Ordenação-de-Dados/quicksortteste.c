#include <stdio.h>

void troca(int x[], int i, int j) {
    int aux;
    aux = x[i];
    x[i] = x[j];
    x[j] = aux;
}

int particao(int x[], int p, int r) {
    int pivo, i, j;
    pivo = x[(p + r) / 2];
    i = p - 1;
    j = r + 1;
    while (1) {
        do {
            j--;
        } while (x[j] > pivo);
        do {
            i++;
        } while (x[i] < pivo);
        if (i < j) {
            troca(x, i, j);
        } else {
            return j;
        }
    }
}

void quicksort(int x[], int p, int r) {
    int q;
    if (p < r) {
        q = particao(x, p, r);
        quicksort(x, p, q);
        quicksort(x, q + 1, r);
    }
}

int main() {
    int x[10], i;
    // carregando os números no vetor
    for (i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &x[i]);
    }
    // ordenando o vetor de forma crescente
    quicksort(x, 0, 9);
    // mostrando o vetor ordenado
    printf("\n\nEm ordem:\n\n");
    for (i = 0; i < 10; i++) {
        printf(" %d", x[i]);
    }
    return 0;
}

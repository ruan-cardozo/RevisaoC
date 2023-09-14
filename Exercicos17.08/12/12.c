/*
12)Faça uma função que calcule a média de uma sequência de valores, 
os valores deverão ser passados por meio de um vetor de referência. 
*/

#include <stdio.h>
#include <stdlib.h>

void media(int *vetor, int tamanho, float *media);

void media(int *vetor, int tamanho, float *media) {
    int i, soma = 0;

    for(i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }

    *media = (float) soma / tamanho;
}

int main(void) {
    int i, tamanho;
    float media_vetor;
    int *vetor;

    printf("Digite o tamanho do vetor: ");
    scanf("%i", &tamanho);

    vetor = (int *) malloc(tamanho * sizeof(int));

    for(i = 0; i < tamanho; i++) {
        printf("Digite o %iº valor: ", i + 1);
        scanf("%i", &vetor[i]);
    }

    media(vetor, tamanho, &media_vetor);

    printf("Média: %.2f\n", media_vetor);

    free(vetor);

    system("pause");

    return 0;
}


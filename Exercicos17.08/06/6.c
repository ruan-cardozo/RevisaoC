/*
6)Construa um programa que contém duas variáveis inteiras, e cada uma destas 
variáveis deverá ter um valor atribuído nelas, através de uma entrada de dado do usuário. 
Também elaborem no mesmo programa três funções, que deveram usar o conceito de ponteiro para 
anipular a passagem dos dados para as funções. As funções deverão ter as seguintes funcionalidades: 
 soma das duas variáveis, a diferença entre as duas variáveis e a multiplicação das duas variáveis. 
*/

#include <stdio.h>
#include <stdlib.h>

void insercao(int *a, int *b) {
    printf("Digite o valor de a: ");
    scanf("%i", a);

    printf("Digite o valor de b: ");
    scanf("%i", b);
}

int soma(int *a, int *b) {
    return (*a) + (*b);
}

int diferenca(int *a, int *b) {
    return (*a) - (*b);
}
int multiplicacao(int *a, int *b) {
    return (*a) * (*b);
}

int main(void) {
    int a, b;
    int *pa, *pb;

    pa = &a;
    pb = &b;

    insercao(pa, pb);

    printf("Soma: %i\n", soma(pa, pb));
    printf("Diferenca: %i\n", diferenca(pa, pb));
    printf("Multiplicacao: %i\n", multiplicacao(pa, pb));

    system("pause");

    return 0;
}
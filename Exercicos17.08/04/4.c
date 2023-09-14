/*
4)Construa um programa para calcular uma equação de segundo grau, onde x' e x'' 
deverão ser um ponteiro, imprima o valor de x'e x'' após a execução do programa. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float a, b, c;
    float x1, x2; // Não é necessário usar ponteiros aqui
} Equacao;

Equacao insercao(void);
void delta(Equacao *equacao);

Equacao insercao(void) {
    Equacao equacao;
    printf("Digite o valor de a: ");
    scanf("%f", &equacao.a);

    printf("Digite o valor de b: ");
    scanf("%f", &equacao.b);

    printf("Digite o valor de c: ");
    scanf("%f", &equacao.c);

    return equacao;
}

void calcularRaizes(Equacao *equacao) {
    float delta = equacao->b * equacao->b - 4 * equacao->a * equacao->c;
    equacao->x1 = (-equacao->b + sqrt(delta)) / (2 * equacao->a);
    equacao->x2 = (-equacao->b - sqrt(delta)) / (2 * equacao->a);
}

int main(void) {
    Equacao eq;
    
    eq = insercao(); // Chama a função para inserir os valores
    calcularRaizes(&eq); // Chama a função para calcular as raízes

    printf("Raiz x': %.2f\n", eq.x1);
    printf("Raiz x'': %.2f\n", eq.x2);
    
    system("pause");
    
    return 0;
}



    /* 
    5)Construa um programa para calcular a área e de um círculo, a área deve ser do tipo de ponteiro. 
    */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

typedef struct {
    float raio;
    float area;  // Não é necessário um ponteiro para a área
} Circulo;

Circulo insercao(void);
void calcularArea(Circulo *circulo);

Circulo insercao(void) {
    Circulo circulo;
    printf("Digite o valor do raio: ");
    scanf("%f", &circulo.raio);

    return circulo;
}

void calcularArea(Circulo *circulo) {
    circulo->area = M_PI * circulo->raio * circulo->raio;
}

int main(void) {
    Circulo circulo;
    
    circulo = insercao(); // Chama a função para inserir os valores
    calcularArea(&circulo); // Chama a função para calcular a área

    printf("Área: %.5f\n", circulo.area);
    
    system("pause");
    
    return 0;
}

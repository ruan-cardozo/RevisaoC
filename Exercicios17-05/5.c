/* 
5)Construa um programa para calcular a área e de um círculo, a área deve ser do tipo de ponteiro. 
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float raio;
    float *area;
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
    *circulo->area = 3.14 * circulo->raio * circulo->raio;
}

int main(void) {
    Circulo circulo;
    
    circulo = insercao(); // Chama a função para inserir os valores
    calcularArea(&circulo); // Chama a função para calcular a área

    printf("Área: %.2f\n", *circulo.area);
    
    system("pause");
    
    return 0;
}
#include <stdio.h>
#include <math.h>

// Estrutura para armazenar os coeficientes da equação
struct Equacao {
    float a;
    float b;
    float c;
};

// Função para calcular as raízes da equação de segundo grau
void calcularRaizes(struct Equacao eq, float* x1, float* x2) {
    float discriminante = eq.b * eq.b - 4 * eq.a * eq.c;

    if (discriminante > 0) {
        *x1 = (-eq.b + sqrt(discriminante)) / (2 * eq.a);
        *x2 = (-eq.b - sqrt(discriminante)) / (2 * eq.a);
    } else if (discriminante == 0) {
        *x1 = *x2 = -eq.b / (2 * eq.a);
    } else {
        *x1 = *x2 = 0; // Raízes imaginárias ou complexas, atribuímos 0 aos ponteiros
    }
}

// Função para inserir os coeficientes da equação
void inserirDados(struct Equacao* eq) {
    printf("Digite os coeficientes da equação (ax^2 + bx + c = 0):\n");
    printf("a: ");
    scanf("%f", &eq->a);
    printf("b: ");
    scanf("%f", &eq->b);
    printf("c: ");
    scanf("%f", &eq->c);
}

// Função para imprimir as raízes
void imprimirRaizes(float x1, float x2) {
    printf("Raízes da equação:\n");
    printf("x1 = %f\n", x1);
    printf("x2 = %f\n", x2);
}

int main() {
    struct Equacao eq;
    float x1, x2;

    inserirDados(&eq);
    calcularRaizes(eq, &x1, &x2);
    imprimirRaizes(x1, x2);

    return 0;
}

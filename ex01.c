/* 
1- Declare duas variáveis int e realize as operações de soma, subtração, multiplicação e divisão entre elas.
*/

#include <stdio.h>

int main() {
    //variaveis
    int a, b;
    int soma;
    int sub;
    int mult;
    int div;

    printf("Digite um numero: ");
    scanf("%i",&a);
    printf("Digite um numero: ");
    scanf("%i",&b);

    //processamento
    soma = a + b;
    sub = a - b;
    mult = a * b;
    div = a / b;
    
    printf("A soma dos numeros e: %d\n", soma);
    printf("A subtracao dos numeros e: %d\n", sub);
    printf("A multiplicacao dos numeros e: %d\n", mult);
    printf("A divisao dos numeros e: %d\n9", div);
    
}
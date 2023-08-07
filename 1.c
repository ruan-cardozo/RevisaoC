/* 
    Faça os seguintes exercícios em C ANSI e testes seus conhecimentos: 

1)Um programa que contém duas variáveis inteiras e cada uma destas variáveis deve ter um valor atribuído. Escrever um programa que mostre os seguintes resultados: 

A)  A soma das duas variáveis. 

B)  A diferença entre as duas variáveis. 

C)  O dobro da primeira mais o triplo da segunda variável. 

D)  A multiplicação das duas variáveis. 
*/


#include <stdio.h>

int main () {
    int a = 10, b = 5;

    printf("A soma das duas variáveis: %d\n", a + b);

    printf("A diferença entre as duas variáveis: %d\n", a - b);

    printf("O dobro da primeira mais o triplo da segunda variável: %d\n", (a * 2) + (b * 3));

    printf("A multiplicação das duas variáveis: %d\n", a * b);
}
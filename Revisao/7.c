/*
    7)Crie um programa que declare uma base e um expoente e, 
    em seguida, mostre o valor da potência. 
*/
#include <stdio.h>
int main() {
    int base = 2, expoente = 3, resultado = 1;

    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }

    printf("%d\n", resultado);
}
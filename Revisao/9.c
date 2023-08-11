/*
9)Escrever um programa que calcule o número fatorial de um número. 
*/
#include <stdio.h>
int main() {
    int numero = 5, resultado = 1;

    for (int i = 1; i <= numero; i++) {
        resultado *= i;
    }

    printf("%d\n", resultado);    
}
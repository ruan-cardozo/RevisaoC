/*
15)Um programa declara três strings. 
Escrever um código que mostre de forma ordenada a 
quantidade de caracteres de cada uma. 
*/
#include <stdio.h>
int main() {
    char string1[] = "Hello World";
    char string2[] = "Hello World";
    char string3[] = "Hello World";

    int i = 0;
    while (string1[i] != '\0') {
        i++;
    }
    printf("String 1: %d\n", i);

    i = 0;
    while (string2[i] != '\0') {
        i++;
    }
    printf("String 2: %d\n", i);

    i = 0;
    while (string3[i] != '\0') {
        i++;
    }
    printf("String 3: %d\n", i);
}
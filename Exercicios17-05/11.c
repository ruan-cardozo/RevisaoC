/* 
11)Faça uma função que leia um texto e converta este texto para maiúscula. 
O texto deve ser passado para função por referência. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void maiuscula(char *texto);

void maiuscula(char *texto) {
    int i;

    for(i = 0; i < strlen(texto); i++) {
        texto[i] = toupper(texto[i]);
    }
}

int main(void) {
    char texto[100];

    printf("Digite um texto: ");
    scanf("%s", texto);

    maiuscula(texto);

    printf("Texto: %s\n", texto);

    system("pause");

    return 0;
}

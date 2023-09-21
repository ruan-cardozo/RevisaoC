/*
10)Faça uma função que leia um nome, converta o primeiro caractere 
deste nome para maiúscula. 
O nome deve ser passado para função por referência. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void maiuscula(char *nome);

void maiuscula(char *nome) {
    nome[0] = toupper(nome[0]);
}

int main(void) {
    char nome[100];

    printf("Digite um nome: ");
    scanf("%s", nome);

    maiuscula(nome);

    printf("Nome: %s\n", nome);

    system("pause");

    return 0;
}


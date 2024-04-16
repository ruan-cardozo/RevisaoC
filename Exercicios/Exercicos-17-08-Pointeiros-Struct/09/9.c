/*
9)Faça uma função que receba como parâmetros por 
referência a linha, a coluna e uma mensagem, esta função 
deve imprimir na tela a mensagem na posição solicitada. 
*/

#include <stdio.h>
#include <stdlib.h>

void imprimir(char *mensagem, int linha, int coluna); // Removido os ponteiros aqui
void insercao(char *mensagem, int *linha, int *coluna); // Adicionado mensagem como argumento

int main(void) {
    char mensagem[100];
    int linha, coluna;

    insercao(mensagem, &linha, &coluna); // Passa mensagem como argumento
    imprimir(mensagem, linha, coluna); // Remove os ponteiros aqui

    system("pause");

    return 0;
}

void insercao(char *mensagem, int *linha, int *coluna) {
    printf("Digite a mensagem: ");
    scanf("%s", mensagem);
    getchar();

    printf("Digite a linha: ");
    scanf("%i", linha);
    getchar();

    printf("Digite a coluna: ");
    scanf("%i", coluna);
    getchar();
}


void imprimir(char *mensagem, int linha, int coluna) { // Remove os ponteiros aqui
    printf("Mensagem: %s\n", mensagem);
    printf("Linha: %i\n", linha);
    printf("Coluna: %i\n", coluna);
}

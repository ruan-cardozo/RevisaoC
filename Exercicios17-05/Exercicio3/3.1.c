/*
3)Construa um programa que define uma estrutura de peça, que poderá 
ser usado para outros programas, deverá conter atributos como: 
código, nome, cor, peso, preço. Também uma função entrada de dados 
e uma função de saídas de dados. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 1 //tamanho max do array de pecas

typedef struct {
    int code;
    char name[50];
    char color[50];
    float weight;
    float price;
}Part;


Part insert(void);
void printParts(Part p[], int size);

Part insert(void) {
    Part p;
    printf("Digite o codigo da peça:\n");
    scanf("%i", &p.code);
    getchar();

    printf("Digite o nome da peça:\n");
    fgets(p.name, sizeof(p.name), stdin);
    p.name[strcspn(p.name, "\n")] = '\0';

    printf("\nDigite a cor da peça:\n");
    fgets(p.color, sizeof(p.color), stdin);
    p.color[strcspn(p.color, "\n")] = '\0';

    printf("\nDigite o peso da peça:\n");
    scanf("%f", &p.weight);
    getchar();

    printf("\nDigite o preço da peça:\n");
    scanf("%f", &p.price);
    getchar();

    return(p);
}





int main(void) {
    Part parts[TAM];
    int i;

    for (i = 0; i < TAM; i++) {
        printf("---%i---\n",i);
		parts[i]=insert();
    }
    
    printParts(parts, TAM);
    return 0;
}
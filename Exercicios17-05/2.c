/*
2)Construa um programa que define um tipo novo de dados, para uma 
estrutura de um animal, deverá conter atributos como: raça, cor, 
peso e sexo.  E solicite ao usuário do programa 10 espécies e 
depois imprima em tela.
*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 1

typedef struct {
    char raca[100];
    char cor[50];
    char sexo[50];
    float peso;
}Animal;

Animal insercao(void);
void impressao(Animal a[]);

Animal insercao(void){
	Animal a;
	
	printf("Digite a raca: ");
	scanf("%s", &a.raca);
    getchar();

	printf("Digite a cor: ");
	scanf("%s", &a.cor);
	getchar();

	printf("Digite o sexo: ");
	scanf("%c", &a.sexo);
	getchar();

	printf("Digite o peso: ");
	scanf("%f", &a.peso);
    getchar();

	return a;
}

void impressao(Animal a[]){
	int i;
	printf("RACA\t\t\tCOR\t\t\tSEXO\t\t\tPESO\n");
	for(i=0;i<TAM;i++){
		printf("%s\t\t%s\t\t%c\t\t%.1f\n", 
		a[i].raca,a[i].cor,a[i].sexo,a[i].peso);
	}
}

int main(void){
	
	Animal bd[TAM];
    int i;
	for(i=0;i<TAM;i++){
		printf("---%i---\n",i);
		bd[i]=insercao();
	}
	
	impressao(bd);
	
	return 0;
	}
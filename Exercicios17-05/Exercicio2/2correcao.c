/*
2.	Construa um programa que define um tipo novo de dados, para uma estrutura de 
um animal, deverá conter atributos como: raça, cor, peso e sexo.  E solicite ao 
usuário do programa 10 espécies e depois imprima em tela. 
*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 3

typedef struct{
	char raca[50], cor[50], sexo;
	float peso;	
}Animal;

Animal inserir(void);
void imprimir(Animal *a);

int main(void){
	Animal bd[TAM];
	int i;
	
	for(i=0;i<TAM;i++){
		printf("Dados %i\n", i+1);
		bd[i]=inserir();
	}
	
	imprimir(bd);
	
	return 0;
}

Animal inserir(void){
	Animal a;
	
	printf("Digite raca: ");
	gets(a.raca);
	fflush(stdin);
	printf("Digite cor: ");
	gets(a.cor);
	fflush(stdin);
	printf("Digite sexo: ");
	scanf("%c",&a.sexo);
	fflush(stdin);
	printf("Digite peso: ");
	scanf("%f",&a.peso);
	fflush(stdin);
	
	return a;
}

void imprimir(Animal *a){
	int i;
	for(i=0;i<TAM;i++){
		printf("%s\t%s\t%c\t%.1f\n", a[i].raca,a[i].cor,a[i].sexo,a[i].peso);
	}
}
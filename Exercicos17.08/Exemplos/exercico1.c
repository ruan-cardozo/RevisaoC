/*
1. Construa um programa que define uma estrutura de tipo pessoa, 
solicite inserção de dados para a estrutura de tipo pessoa e imprime 
a estrutura tipo pessoa. (NOME, IDADE, ALTURA, PESO, SEXO) 
USE FUNÇÃO PARA ENTRADA E SAÍDA 
*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 3

typedef struct{
	char nome[50], sexo;
	int idade;
	float altura, peso;
}Pessoa;

Pessoa insercao(void);
void impressao(Pessoa a[]);

Pessoa insercao(void){
	Pessoa a;
	
	printf("Digite o nome: ");
	gets(a.nome);
	getchar();

	printf("Digite a idade: ");
	scanf("%i", &a.idade);
	getchar();
	
	printf("Digite o altura: ");
	scanf("%f", &a.altura);
	getchar();
	printf("Digite o peso: ");
	scanf("%f", &a.peso);
	getchar();
	printf("Digite o sexo: ");
	scanf("%c", &a.sexo);
	getchar();
	
	return a;
}
void impressao(Pessoa a[]){
	int i;
	
	printf("NOME\tIDADE\tALTURA\tPESO\tSEXO\n");
	for(i=0;i<TAM;i++){
		printf("%s\t%i\t%.1f\t%.1f\t%c\n",
		a[i].nome,a[i].idade,a[i].altura,a[i].peso,a[i].sexo);
	}
}

int main(void){
	int i;
	Pessoa bd[TAM];
	
	for(i=0;i<TAM;i++){
		printf("---%i---\n",i);
		bd[i]=insercao();
	}
	
	impressao(bd);
	
	return 0;
	}
/*
1. Construa um programa que define uma estrutura de tipo pessoa, 
solicite inserção de dados para a estrutura de tipo pessoa e imprime 
a estrutura tipo pessoa. (NOME, IDADE, ALTURA, PESO, SEXO) 
USE FUNÇÃO PARA ENTRADA E SAÍDA 
*/

#include <stdio.h>
#include <stdlib.h>
#include "components.h"
#define TAM 3


int main(void){
	Pessoa bd[TAM];
	
	for(int i=0;i<TAM;i++){
		printf("---%i---\n",i);
		bd[i]=insercao();
	}
	
	impressao(bd,TAM);
	
	return 0;
}
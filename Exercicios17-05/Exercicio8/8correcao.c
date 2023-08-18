/*
7.	Faça um programa para colocar três números em ordem crescente. Deve ter uma 
função para fazer a troca dos valores, use uma função usando passagem de parâmetro 
por referência.
*/
#include <stdio.h>
#include <stdlib.h>

#define TAM 5
	
void troca(int *a, int*b);

int main(void){
	int n[TAM], i, j;
	
	for(i=0;i<TAM;i++){
		printf("Digite %i numero: ",i+1);
		scanf("%i",&n[i]);
	}
	
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			if(n[i]<n[j]){
				troca(&n[i],&n[j]);
			}
		}
	}
	
	for(i=0;i<TAM;i++){
		printf("%i, ",n[i]);
	}
	
	return 0;
}

void troca(int *a, int *b){
	int aux = *a;
	*a=*b;
	*b=aux;
}
/*
12.	Faça uma função que calcule a média de uma sequência de valores, os valores 
deverão ser passados por meio de um vetor de referência.
*/

#include <stdio.h>
#include <stdlib.h>

float media(float *n, int q);

int main(void){
	int qtd, i;
	
	printf("Digite a quantidade de valores: ");
	scanf("%i",&qtd);
	
	float numeros[qtd];
	for(i=0;i<qtd;i++){
		printf("Digite %i numero : ",i+1);
		scanf("%f",&numeros[i]);
	}
	
	printf("A media e %f",media(numeros, qtd));

	return 0;
}

float media(float *n, int q){
	float s=0;
	int i;
	
	for(i=0;i<q;i++){
		s+=n[i];
	}
	
	return s/q;
}
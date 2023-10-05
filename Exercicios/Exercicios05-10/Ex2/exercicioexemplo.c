/*
2. Faça um programa que cadastre 15 números inteiros, ordene-os usando o 
método insertion sort e em seguida encontre o menor número e quantas vezes 
ele apareceu no vetor.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

#define TAM 10

void entrada(int *x);
void saida(int *x);
void ordene(int *x);

int main(void){
	int numeros[TAM], i=1, cont=1;
	
	entrada(numeros);
	ordene(numeros);
	saida(numeros);
	
	printf("O menor numero e %i\n",numeros[0]);
	while(numeros[0]==numeros[i]){
		cont++;
		i++;
	}
	printf("A quantidade de vezes que o menores numero aparece e %i\n",cont);
	
	
	return 0;
}

void entrada(int *x){
	int i;
	for(i=0;i<TAM;i++){
		printf("Digite %i numero: ",i+1);
		scanf("%i",&x[i]);
	}
}

void saida(int *x){
	int i;
	printf("Os numeros sao: ");
	for(i=0;i<TAM;i++){
		printf("%i, ",x[i]);
	}
	printf("\n");
}

void ordene(int *x){
    int i, j, eleito;

	for (i = 1; i < TAM; i++) {
        eleito = x[i];
        j = i - 1;
        while (j >= 0 && x[j] > eleito) {
            x[j + 1] = x[j];
            j = j - 1;
        }
        x[j + 1] = eleito;
    }
}
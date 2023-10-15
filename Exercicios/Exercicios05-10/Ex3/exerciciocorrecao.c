/*
3. Faça um programa que cadastre 10 números reais, ordene-os usando o 
método selection sort e em seguida encontre o maior número e quantas 
vezes ele apareceu no vetor.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

#define TAM 10

void entrada(float *x);
void saida(float *x);
void ordene(float *x);

int main(void)
{
	float numeros[TAM];
	int i=TAM-2, cont=1;
	
	entrada(numeros);
	ordene(numeros);
	saida(numeros);
	
	printf("O maior numero e %f\n",numeros[TAM-1]);
	while(numeros[TAM-1]==numeros[i])
    {
		cont++;
		i--;
	}
	printf("A quantidade de vezes que o maior numero aparece e %i\n",cont);
	
	
	return 0;
}

void entrada(float *x)
{
	int i;
	for(i=0;i<TAM;i++)
    {
		printf("Digite %i numero: ",i+1);
		scanf("%f",&x[i]);
	}
}

void saida(float *x)
{
	int i;
	printf("Os numeros sao: ");
	for(i=0;i<TAM;i++)
    {
		printf("%f, ",x[i]);
	}
	printf("\n");
}

void ordene(float *x)
{   
    int i, j, pos;
	float eleito, menor;

	for (i = 0; i < TAM-1; i++)
    {
        eleito = x[i];
        menor = x[i + 1];
        pos = i + 1;
        for (j = i + 2; j < TAM; j++) 
        {
            if (x[j] < menor) 
            {
                menor = x[j];
                pos = j;
            }
        }
        if (menor < eleito) 
        {
            x[i] = x[pos];
            x[pos] = eleito;
        }
    }
}
/*
2. Faça um programa que cadastre 15 números inteiros, ordene-os usando o método
insertion sort e em seguida encontre o menor número e quantas vezes ele apareceu no
vetor.
R.:
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 15

void entrada(int *x);
void saida(int *x);
void ordenar(int *x);

int main(void)
{
    int bd[TAM];
    entrada(bd);
    ordenar(bd);
    saida(bd);
    return 0;
}

void entrada(int *x)
{
    int i;
    srand(time(NULL));
    for(i=0;i<TAM;i++)
    {
        x[i] = rand()%100;
    }
}

void saida(int *x)
{
    int i;
    for(i=0;i<TAM;i++)
    {
        printf("%d ",x[i]);
    }
}

void ordenar(int *x)
{
    int i, j, aux;
    for(i=1;i<TAM;i++)
    {
        aux = x[i];
        j = i-1;
        while(j>=0 && aux<x[j])
        {
            x[j+1] = x[j];
            j--;
        }
        x[j+1] = aux;
    }
}


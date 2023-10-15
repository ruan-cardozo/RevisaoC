/*
4. Faça um programa que cadastre 20 palavras em um vetor, 
ordene-os usando o método merge sort, em seguida encontre 
as palavras que começam vogais e mostre quais são elas. 
R.: 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void entrada(char *palavra);
void saida(char *palavra);
void ordene(char *palavra);

int main(void)
{
    char palavras[20][50];
    int i;
    for(i=0;i<20;i++)
    {
        printf("Digite as palavras %d:  ", i+1);
        fgets(palavras[i], sizeof(palavras[i]), stdin);
        palavras[i][strcspn(palavras[i], "\n")] = '\0';
    }

    
}


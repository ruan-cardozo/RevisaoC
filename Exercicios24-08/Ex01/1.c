/* 
1. Construa um algoritmo que use recursividade 
para resolver o problema 
matemático da seria de Pitágoras, 
sabendo que a série é 1, 3, 6, 10, 15, 21, ...
 */

#include <stdio.h>
#include <stdlib.h>

int seriePitagorica(int n);

int seriePitagorica(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + seriePitagorica(n - 1);
    }
}

int main(void)
{
    int n;
    int i;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d-", seriePitagorica(i)); 
    }
    
    return 0;
}
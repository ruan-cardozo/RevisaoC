/*2. Usando conceito de recursividade construa um algoritmo, onde possuem 
uma função que informar o valor de um termo da série de Fibonacci. 
Obs. Sabendo que a série é 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
*/

#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n);

int fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
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
        printf("%d-", fibonacci(i)); 
    }
    
    return 0;
}
#include <stdio.h> 

int main(void) { 
    int x[5]; 
    int n, i, j, aux, troca; 
    for (i = 0; i <= 4; i++) { 
        printf("Digite o %i numero: ",i+1); 
        scanf("%i,",&x[i]); 
        fflush(stdin);
    } 
n = 1; 
    troca = 1; 
    while (n <= 5 && troca == 1) { 
        troca = 0; 
        for (i = 0; i <= 3; i++) { 
            if (x[i] > x[i + 1]) { 
                troca = 1; 
                aux = x[i]; 
                x[i] = x[i + 1]; 
                x[i + 1] = aux; 
            } 
        } 
        n = n + 1; 
    } 
    printf("\n\nEm ordem:\n\n"); 
    for (i = 0; i <= 4; i++) { 
        printf("%i numero: %i\n",i+1,x[i]); 
    } 
    return 0; 
} 
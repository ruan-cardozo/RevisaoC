#include <stdio.h> 
int main(void) { 
    int x[5]; 
    int n, i, j, aux; 
    for (i = 0; i <= 4; i++) { 
        printf("Digite o %i numero: ",i+1); 
        scanf("%i,",&x[i]); 
        fflush(stdin); 
    } 
    for (j = 1; j <= 4; j++) { 
        for (i = 4; i >= j; i--) { 
            if (x[i] < x[i - 1]) { 
                aux = x[i]; 
                x[i] = x[i - 1]; 
                x[i - 1] = aux; 
            } 
        } 
    } 
    printf("\n\nEm ordem:\n\n"); 
    for (i = 0; i <= 4; i++) { 
        printf("%i numero: %i\n",i+1,x[i]); 
    } 
    return 0; 
} 
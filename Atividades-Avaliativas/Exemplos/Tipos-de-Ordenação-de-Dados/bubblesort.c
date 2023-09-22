#include <stdio.h> 
int main(void) { 
    int x[5]; 
    int n, i, aux; 
    for (i = 0; i <= 4; i++) { 
        printf("Digite o %i numero: ",i+1); 
        scanf("%i,",&x[i]); 
        fflush(stdin); 
    } 
    for (n = 1; n <= 5; n++) { 
        for (i = 0; i <= 3; i++) { 
            if (x[i] > x[i + 1]) { 
                aux = x[i]; 
                x[i] = x[i + 1]; 
                x[i + 1] = aux; 
            } 
        } 
    }  
    printf("\n\nEm ordem:\n\n"); 
    for (i = 0; i <= 4; i++) { 
        printf("%i numero: %i\n",i+1,x[i]); 
    } 
    return 0; 
} 
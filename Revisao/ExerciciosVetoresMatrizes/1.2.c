 /*
1. **Soma dos Elementos:** Crie um programa que calcule a soma de 
todos os elementos em um vetor de inteiros.
*/

 #include <stdlib.h>
 #include <stdio.h>

 int main(void) {
     int numeros[5] = {10, 20, 30, 40, 50}; //declarando um array(vetor) de inteiros com 5 elementos.
     int soma = 0;//declarando uma variavel inteira para armazenar a soma dos elementos do vetor.
    
    //loop do for para percorrer o array "numeros"    
     for (int i = 0; i < 5; i++){
         soma += numeros[i]; //adiciona o valor do elemento atual do array à variavel soma.
     }

    //imprimir o resultado da soma dos elementos do vetor.
    printf("A soma dos vetores e: %d\n\n\n", soma);
     return 0;    

}
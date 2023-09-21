/*
Maior e Menor Valor: Escreva um programa que 
encontre o maior e o menor valor em um vetor de números inteiros.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho; //variavel para armazenar o tamanho do vetor
    printf("Digite o tamanho do vetor: ");//input no cmd
    scanf("%d", &tamanho); //leitura da variavel
    
    int vetor[tamanho]; //com base no tamanho recebido, eu crio meu vetor
    printf("Digite os elementos do vetor:\n");//apenas input de tela
        /*
    for (inicialização; condição; incremento) {
    // Código a ser executado a cada iteração
    }*/


    /*
        int i = 0, e a inicializacao do for, geralmente sempre vai ser i = 0, mas posso inicializar de onde quero 
        por exemplo para printar 10 numeros posso comecar do "0" ou do "1", ou de outro numero ele vai inicializar 
        o loop a partir daquele que eu definir.

         i < condicao enquanto o i for menor que o tamanho ele vai ler e guarda os numeros baseando no tamanho do vetor utilizando o scanf 
    */
    for (int i = 0; i < tamanho; i++/* i = i + 1 */) {
        scanf("%d", &vetor[i]);/* essa linha e usada para ler o valor inteiro digitado pelo usuario, o & antes do vetor[i] indica que tamo
        passando o endereco de memoria onde o valor digitado sera armazenado e o indice [i] e usado para acessar o elemento atual do vetor
        onde o valor sera lido e armazenado em uma posicao do vetor */

        /*
            por fim o loop ira executar o tamanho onde tamanho e a quantidade de coisas que o vetor pode armazenar
        */
    }
    
    int maior = vetor[0]; //definindo as variaveis pedidas pelo exercicio vetor maior e vetor menor inicializado com valor = 0
    int menor = vetor[0];
    
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {/*
        verifica se o elemento do vetor do indice i e maior que o atual que esta armazenado, sempre vai atualizando com o mair que achar
        */
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i]; // mesmo comportamento acima porem vai achar o menor numero
        }
    }
    
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    
    return 0;
}

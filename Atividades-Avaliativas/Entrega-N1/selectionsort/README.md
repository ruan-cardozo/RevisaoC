Claro, vou explicar o código linha por linha:

```c
/*
PROCESSO AVALIATIVO N3 – ESTRUTURA DE DADOS
EQUIPE
NOMES: João David, Ruan Cardozo, Thiago Saraiva.

CONSEGUIU CHEGAR NO RESULTADO?
R: Sim
SE NÃO, POR QUE NÃO CONSEGUIU CHEGAR NO RESULTADO?
R.:
*/
```
Esses comentários iniciais fornecem informações sobre o propósito do código e a equipe que trabalhou nele. Eles não têm impacto na execução do programa, são apenas comentários informativos.

```c
#include <stdio.h>
#include <time.h>
```
Essas duas linhas incluem as bibliotecas padrão em C. `<stdio.h>` é para entrada e saída padrão, enquanto `<time.h>` é usada para medir o tempo de execução do algoritmo.

```c
#define TAMANHO 10000
```
Essa linha define uma constante chamada `TAMANHO` com o valor 10000. Essa constante será usada para determinar o tamanho do vetor a ser ordenado.

```c
// Prototipo de Função
void geraNumero(int *vet, int op);
void selectSort(int *vet);
void imprimirVetor(int *vet);
```
Esses são os protótipos de três funções que serão definidas posteriormente no código. Eles são necessários para que o compilador saiba que essas funções existem antes de serem chamadas na função `main`.

```c
// Função geração de números
void geraNumero(int *vet, int op) {
    // ...
}
```
Aqui começa a definição da função `geraNumero`, que gera números e os armazena em um vetor. A função recebe um vetor `vet` e um valor inteiro `op` que determina como os números serão gerados (ordenados, invertidos ou aleatórios).

```c
// Função ordenação insert sort
void selectSort(int *vet){
    // ...
}
```
Aqui começa a definição da função `selectSort`, que implementa o algoritmo de ordenação Selection Sort. Essa função recebe um vetor `vet` e o ordena em ordem crescente.

```c
// Função impressão do vetor
void imprimirVetor(int *vet){
    // ...
}
```
Aqui começa a definição da função `imprimirVetor`, que imprime os elementos de um vetor na tela.

```c
int main(void){
    // Variáveis
    int vet1[TAMANHO];
```
Aqui começa a função principal `main`. Ela declara um vetor chamado `vet1` com o tamanho especificado pela constante `TAMANHO`.

```c
    // Entrada de dados;
    geraNumero(vet1, 3);
```
Aqui a função `geraNumero` é chamada para gerar números aleatórios e preencher o vetor `vet1` com eles. O valor 3 passado como segundo argumento indica que os números devem ser gerados aleatoriamente.

```c
    // Processamentos dos dados
    selectSort(vet1);
```
Aqui a função `selectSort` é chamada para ordenar o vetor `vet1` usando o algoritmo Selection Sort.

```c
    // Saída de dados
    return 0;
}
```
Finalmente, a função `main` retorna 0, indicando que o programa foi executado com sucesso. Neste código, a saída de dados consiste em imprimir informações sobre a quantidade de comparações, trocas e tempo de execução do algoritmo, mas algumas linhas estão comentadas e não serão executadas neste exemplo específico.
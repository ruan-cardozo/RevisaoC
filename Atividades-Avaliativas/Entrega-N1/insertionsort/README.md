Claro, vou explicar o código linha por linha, fornecendo detalhes sobre cada expressão e seu propósito:

```c
/*
PROCESSO AVALIATIVO N3 – ESTRUTURA DE DADOS
EQUIPE
NOMES:
CONSEGUIU CHEGAR NO RESULTADO?
R:
SE NÃO, POR QUE NÃO CONSEGUIU CHEGAR NO RESULTADO?
R.:
*/
```
Essa parte é um comentário de várias linhas que descreve informações sobre o processo avaliativo e solicita respostas às perguntas sobre o resultado. Esses comentários não afetam o código em si e são usados para documentação.

```c
#include <stdio.h>
#include <time.h>
#include<stdlib.h>
```
Essas linhas incluem os cabeçalhos (headers) das bibliotecas necessárias para o programa. `<stdio.h>` para entrada/saída, `<time.h>` para medição de tempo e `<stdlib.h>` para funções relacionadas à alocação de memória e geração de números aleatórios.

```c
#define TAMANHO 10000
```
Essa linha define uma constante chamada `TAMANHO` com o valor 10000, que representa o tamanho do vetor que será ordenado.

```c
// Prototipo de Função
void geraNumero(int *vet, int op);
void insertSort(int *vet);
void imprimirVetor(int *vet);
```
Aqui estão os protótipos de três funções que serão definidas posteriormente no código. Eles servem para informar ao compilador sobre a existência e os tipos de argumentos dessas funções.

```c
// Função geração de números
void geraNumero(int *vet, int op) {
    int i;

    switch (op) {
        case 1: // Ordenados
            for (i = 0; i < TAMANHO; i++) {
                vet[i] = i + 1;
            }
            break ;
        case 2: //Invertidos
            for (i = 0; i < TAMANHO; i++) {
               vet[i] = TAMANHO-i;
            }
            break;
        case 3: // Aleatórios
            for (i = 0; i < TAMANHO; i++) {
                vet[i] = (int) (rand() % TAMANHO);
            }
            break;
    }
}
```
A função `geraNumero` é responsável por preencher um vetor passado como argumento com números de acordo com a opção especificada. A opção `op` determina se os números serão ordenados, invertidos ou aleatórios. O `switch` é usado para selecionar o caso apropriado com base na opção.

- Caso 1: Preenche o vetor com números ordenados de 1 a `TAMANHO`.
- Caso 2: Preenche o vetor com números em ordem inversa, de `TAMANHO` a 1.
- Caso 3: Preenche o vetor com números aleatórios de 0 a `TAMANHO - 1`.

```c
// Função ordenação insert sort
void insertSort(int *vet){
    int eleito, i, j, qtd_trocas, qtd_comparacoes;

    eleito = 0;
    qtd_trocas = 0;
    qtd_comparacoes = 0;

    // Ponto do algoritmo para iniciar o tempo de execução
    float tempo_inicial = clock();
    for (i = 1; i <= TAMANHO - 1; i++) {
        eleito = vet[i];
        j = i - 1;
        qtd_comparacoes++;
        qtd_trocas++;
        while (j >= 0 && vet[j] > eleito) {
            vet[j + 1] = vet[j];
            j = j - 1;
            qtd_comparacoes++;
            qtd_trocas++;
        }
        vet[j + 1] = eleito;
        qtd_trocas++;
    }

    // Ponto do algoritmo para calcular o tempo de execução
    float tempo_final = clock() - tempo_inicial;

    // Saída de dados
    printf("Algoritmo de ordenacao Insertion Sort: \n");
    printf("\nQuantidade de comparacoes: %i\n", qtd_comparacoes);
    printf("Quantidade de trocas: %i\n", qtd_trocas);
    printf("Tempo de execucao do algoritmo: %.3f", tempo_final/1000);
}
```
A função `insertSort` implementa o algoritmo de ordenação Insertion Sort. Ela recebe um vetor como entrada e o ordena em ordem crescente. Além disso, ela calcula o número de comparações, trocas e o tempo de execução do algoritmo.

- `eleito` é a variável temporária para armazenar o elemento que está sendo inserido no lugar correto.
- `i` é um índice que percorre o vetor.
- `j` é um índice usado para comparar e mover elementos à medida que eles são inseridos na posição correta.
- `qtd_trocas` e `qtd_comparacoes` são variáveis para contagem.
- `tempo_inicial` é usado para medir o tempo de execução do algoritmo.
- O loop `for` começa a partir do segundo elemento do vetor e percorre até o último.
- O algoritmo realiza a inserção do elemento `eleito` na posição correta no vetor, movendo elementos maiores para a direita.
- O tempo de execução é calculado subtraindo o `tempo_inicial` do tempo atual e convertido para segundos.

```c
// Função impressão do vetor
void imprimirVetor(int *vet){
    int i;
    for (i = 0; i < TAMANHO; i++){
        printf("%i, ", vet[i]);
        if ((i+1)%14 == 0){
            printf("\n");
        }
    }
}
```
A função `imprimirVetor` é usada para imprimir o vetor na tela. Ela itera através dos elementos do vetor e imprime cada elemento. Além disso, verifica se o número atual de elementos impressos é múltiplo de 14 para inserir uma quebra de linha.

```c
int main (void){
    // Variáveis
    int vet1[TAMANHO];

    // Entrada de dados;
    geraNumero(vet1,3);
    // printf("Desordenado: \n\n");
    // imprimirVetor(vet1);

    // Processamentos dos dados
    insertSort(vet1);

    // Saída de dados
    // printf("\n\nOrdenado: \n\n");
    //imprimirVetor(vet1);
    return 0;

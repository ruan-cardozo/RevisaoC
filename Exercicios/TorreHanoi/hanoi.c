#include <stdio.h>
#include <time.h>

int count = 0; // Contador de movimentos
int quantidade = 5; // Nº de discos
clock_t tempoinicial; // Tempo inicial
clock_t tempofinal; // Tempo final

/* Função recursiva que movimenta os discos entre os pinos
 * Pino Origem = 0
 * Pino Auxiliar = 1
 * Pino Destino = 2
 */
void TorreHanoi(int origem, int destino, int auxiliar, int quantidade) {
    if (quantidade == 1) {
        printf("Move de %d para %d\n", origem, destino);
        count += 1;
    } else {
        TorreHanoi(origem, auxiliar, destino, quantidade - 1);
        TorreHanoi(origem, destino, auxiliar, 1);
        TorreHanoi(auxiliar, destino, origem, quantidade - 1);
    }
}

int main() {
    tempoinicial = clock(); // Tempo inicial
    TorreHanoi(0, 2, 1, quantidade);
    tempofinal = clock(); // Tempo final

    double tempo_de_execucao = ((double)(tempofinal - tempoinicial)) / CLOCKS_PER_SEC;

    printf("\nQuantidade de Discos: %d\n", quantidade);
    printf("Nº mínimo de movimentos: %d\n", count);
    printf("Tempo final de execução: %.4f segundos\n", tempo_de_execucao);

    return 0;
}

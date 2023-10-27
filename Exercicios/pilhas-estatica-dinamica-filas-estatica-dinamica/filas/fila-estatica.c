#include <stdio.h>

int vet[10];
int i = -1;

void inserir(int n)
{
    i++;
    if (i >= 0 && i <= 9)
    {
        vet[i] = n;
    }
    else
    {
        printf("Estouro da fila\n");
    }
}
void remover()
{
    int j;
    if (i >= 0 && i <= 9)
    {
        i--;
        for (j = 0; j <= i; j++)
        {
            vet[j] = vet[j + 1];
        }
    }
    else
    {
        printf("Estouro da fila\n");
    }
}
void imprime()
{
    int j;
    printf("\n");
    for (j = i; j >= 0; j--)
    {
        printf("%i ", vet[j]);
    }
    printf("\n");
}
int main(void)
{
    int no = 0;
    // Inserir nó no vetor
    do
    {
        printf("Digite os no que serao inserido na fila: (Dig. -1 p/ para):");
        scanf("%i", &no);
        fflush(stdin);
        if (no != -1)
        {
            inserir(no);
        }
    } while (no != -1);

    // Imprime todo o vetor
    printf("\nMostrando os no da fila:\n");
    imprime();

    // remover nó do vetorprintf("Digite a quantidade de no que sera removida da fila: ");
    int qtd;
    scanf("%i", &qtd);
    fflush(stdin);
    int id;
    for (id = 0; id < qtd; id++)
    {
        remover();
    }
    printf("No que estao na fila : ");
    imprime();
}
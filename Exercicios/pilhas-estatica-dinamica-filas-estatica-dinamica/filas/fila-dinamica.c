#include <stdio.h>

typedef struct fila 
{
    int num;
    struct fila* prox;
} FILA;

int main(void) 
{
    FILA* inicio = NULL;
    FILA* fim = NULL;
    FILA* aux;
    int op;
    do 
    {
        system("cls");
        printf("\nMENU DE OPCOES\n");
        printf("1 - Inserir na fila\n");
        printf("2 - Mostrar toda a fila\n");
        printf("3 - Remover da fila\n");
        printf("4 - Esvaziar a fila\n");
        printf("5 - Sair\n");
        printf("Digite uma opcao: ");
        scanf("%i", &op);
        fflush(stdin);
        
        switch (op) 
        {
            case 1:
                printf("Digite o numero a ser inserido na fila: ");
                FILA* novo = (FILA*)malloc(sizeof(FILA));
                scanf("%i", &novo->num);
                fflush(stdin);novo->prox = NULL;
                if (inicio == NULL) 
                {
                    inicio = novo;
                    fim = novo;
                }
                else 
                {
                    fim->prox = novo;
                    fim = novo;
                }
                printf("Numero inserido na fila\n");
                getch();
                break;
            case 2:
                if (inicio == NULL) 
                {
                    printf("Fila vazia\n");
                }
                else 
                {
                    printf("\nMostrando todos os no da fila\n");
                    aux = inicio;
                    while (aux != NULL) 
                    {
                        printf("%i, ", aux->num);
                        aux = aux->prox;
                    }
                    printf("\n");
                }
                getch();
                break;
            case 3:
                if (inicio == NULL) 
                {
                    printf("Fila vazia\n");
                }
                else 
                {
                    printf("Numero %i removido\n", inicio->num);
                    inicio = inicio->prox;
                }
                getch();
                break;
            case 4:
                if (inicio == NULL) 
                {
                    printf("Fila vazia\n");
                }
                else 
                {
                    inicio = NULL;
                    printf("Fila esvaziada\n");
                }
                getch();
                break;
            case 5:
                printf("Saindo\n");
                getch();
                break;
            default:
                printf("Opção invalida\n");getch();
                break;
        }
    } while (op != 5);
}
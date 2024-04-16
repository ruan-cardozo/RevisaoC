#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char sala[30], semana[30], nome[50], semestre[30];
} Disciplina;

typedef struct lista {
    Disciplina n;
    struct lista *p;
} LISTA;

Disciplina entrada_disciplina(void);
LISTA *entrada_lista(LISTA *n, Disciplina l);
void saida_disciplina(Disciplina n);
void saida_lista(LISTA *n);

int main(void) {
    char op;
    LISTA *l = NULL;

    do {
        system("clear");  // Limpa a tela no Linux
        printf("1 - Adicionar\n");
        printf("2 - Listar\n");
        printf("3 - Sair\n");
        printf("\nDigite uma opcao: ");
        scanf(" %c", &op);
        __fpurge(stdin);  // Limpa o buffer de entrada no Linux

        switch (op) {
            case '1':
                system("clear");  // Limpa a tela no Linux
                l = entrada_lista(l, entrada_disciplina());
                printf("Dados gravados na lista\n");
                break;
            case '2':
                saida_lista(l);
                break;
            case '3':
                printf("Saindo...\n");
                break;
            default:
                printf("Erro! Opcao invalida\n");
        }
        printf("Pressione qualquer tecla para continuar");
        getchar();
    } while (op != '3');

    return 0;
}

Disciplina entrada_disciplina(void) {
    Disciplina n;

    printf("Digite a sala: ");
    fgets(n.sala, sizeof(n.sala), stdin);
    __fpurge(stdin);  // Limpa o buffer de entrada no Linux
    printf("Digite a semana: ");
    fgets(n.semana, sizeof(n.semana), stdin);
    __fpurge(stdin);  // Limpa o buffer de entrada no Linux
    printf("Digite o nome da disciplina: ");
    fgets(n.nome, sizeof(n.nome), stdin);
    __fpurge(stdin);  // Limpa o buffer de entrada no Linux
    printf("Digite o semestre: ");
    fgets(n.semestre, sizeof(n.semestre), stdin);
    __fpurge(stdin);  // Limpa o buffer de entrada no Linux

    return n;
}

LISTA *entrada_lista(LISTA *l, Disciplina n) {
    LISTA *novo = (LISTA *)malloc(sizeof(LISTA));
    novo->n = n;
    novo->p = l;
    return novo;
}

void saida_disciplina(Disciplina n) {
    printf("%s\t", n.sala);
    printf("%s\t", n.nome);
    printf("%s\t", n.semana);
    printf("%s\n", n.semestre);
}

void saida_lista(LISTA *l) {
    system("clear");  // Limpa a tela no Linux
    printf("SALA\tNOME\tSEMANA\tSEMESTRE\n\n");

    while (l != NULL) {
        saida_disciplina(l->n);
        l = l->p;
    }
}

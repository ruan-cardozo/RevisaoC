#include <stdio.h>
#include <stdlib.h>

#define TAM 1

typedef struct {
    char raca[100];
    char cor[50];
    char sexo[50];
    float peso;
} Animal;

Animal insercao(void);
void impressao(Animal a[]);

Animal insercao(void){
    Animal a;//instanciar

    printf("Digite a raca: ");
    scanf("%s", a.raca);
    getchar();

    printf("Digite a cor: ");
    fgets(a.cor, sizeof(a.cor), stdin);
    a.cor[strcspn(a.cor, "\n")] = '\0';

    printf("Digite o sexo: ");
    fgets(a.sexo, sizeof(a.sexo), stdin);
    a.sexo[strcspn(a.sexo, "\n")] = '\0';

    printf("Digite o peso: ");
    scanf("%f", &a.peso);
    getchar();

    return a;
}

void impressao(Animal a[]){
    int i;
    printf("RACA\t\t\t\tCOR\t\t\t\tSEXO\t\t\tPESO\n");
    for(i = 0; i < TAM; i++){
        printf("%s\t\t\t%s\t\t\t\t%s\t\t\t%.1f\n", 
        a[i].raca, a[i].cor, a[i].sexo, a[i].peso);
    }
}

int main(void){
    Animal bd[TAM];
    int i;
    for(i = 0; i < TAM; i++){
        printf("---%i---\n", i);
        bd[i] = insercao();
    }

    impressao(bd);

    return 0;
}

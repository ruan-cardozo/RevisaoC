//Calcular um valor medio de notas

#include<stdio.h>
#include<stdlib.h>

typedef struct Notas {
    int valor;
}valor;

int main(void) {
    struct Notas notas[5] = {{70}, {80}, {95}, {35}, {50}};
    float total = 0;
    float media;

    for (int i = 0; i < 5; i++)
    {
        total += notas[i].valor;
    }

    media = total / 5;

    printf("A media das notas e: %f\n\n\n", media);    

}
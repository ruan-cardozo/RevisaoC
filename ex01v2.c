/* 
1- Declare duas variáveis int e realize as operações de soma, subtração, multiplicação e divisão entre elas.
*/

#include <stdio.h>

int main() {
    //variaveis
    int a, b;
    int soma;
    int sub;
    int mult;
    int div;
    int opcao;

    printf("1- Soma\n");
    printf("2- Subtracao\n");
    printf("3- Multiplicacao\n");
    printf("4- Divisao\n");
    printf("5- Sair\n");
    printf("Selecione uma das opcoes: ");
    scanf("%i", &opcao);



   do { switch(opcao) {
        case 1: 
        printf("Digite um numero: ");
        scanf("%i", &a);
        printf("Digite mais um numero: ");
        scanf("%i", &b);
        printf("A soma dos numeros: A:%d e B:%d Soma:%d ", a, b, soma);
        break;
        case 2:
        printf("Digite um numero: ");
        scanf("%i", &a);
        printf("Digite mais um numero: ");
        scanf("%i", &b);
        printf("A soma dos numeros: A:%d e B:%d Subtracao:%d ", a, b, sub); 
        break;
        case 3:
        printf("Digite um numero: ");
        scanf("%i", &a);
        printf("Digite mais um numero: ");
        scanf("%i", &b);
        printf("A soma dos numeros: A:%d e B:%d Mult:%d ", a, b, mult);
        break;
        case 4:
        if (a || b == 0) {
            printf("Erro divisao por zero");
        }
        printf("Digite um numero: ");
        scanf("%i", &a);
        printf("Digite mais um numero: ");
        scanf("%i", &b);
        printf("A soma dos numeros: A:%d e B:%d Divisao:%d ", a, b, div);
        break;
        case 5:
        printf("Saindo...");
        default:
        printf("Numero incorreto, tente novamente");
      
    }  
} while (opcao != 5);

}
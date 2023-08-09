/*
1- Declare duas variáveis int e realize as operações de soma, subtração, multiplicação e divisão entre elas.
*/

#include <stdio.h>

int main()
{
    // variaveis
    int a, b;
    int opcao;
    float soma;
    float sub;
    float mult;
    float div;

    printf("1- Soma\n");
    printf("2- Subtracao\n");
    printf("3- Multiplicacao\n");
    printf("4- Divisao\n");
    printf("5- Sair\n");
    printf("Selecione uma das opcoes: ");
    scanf("%i", &opcao);

    // processamento
    soma = a + b;
    sub = a - b;
    mult = a * b;
    div = a / b;

    do
    {
        switch (opcao)
        {
        case 1:
            printf("Digite o primeiro numero: \n\n");
            scanf("%i", &a);
            printf("Digite o segundo numero: \n");
            scanf("%i", &b);
            soma = a + b;
            printf("\nA soma dos numeros: A:%i + B:%i Soma:%f ", a, b, soma);
            break;
        case 2:
            printf("Digite o primeiro numero\n: ");
            scanf("%i", &a);
            printf("Digite o segundo numero\n: ");
            scanf("%i", &b);
            sub = a - b;
            printf("\nA subtracao dos numeros: A:%i - B=%i Subtracao:%f ", a, b, sub);
            break;
        case 3:
            printf("\nDigite o primeiro numero\n: ");
            scanf("%i", &a);
            printf("\nDigite o segundo numero: ");
            scanf("%i", &b);
            mult = a * b;

            printf("\nA multiplicacao dos numeros: A:%i X B:%i Mult:%f", a, b, mult);
            break;
        case 4:
            printf("\nDigite o primeiro numero:\n ");
            scanf("%i", &a);
            printf("\nDigite o segundo numero: ");
            scanf("%i", &b);
            if (b == 0)
            {
                printf("\nErro divisao por zero\n");
            }
            else
            {
                div = (float)a / b;
                printf("\nA divisao dos numeros: A:%i e B:%i Divisao:%f ", a, b, div);
            }
            break;
        case 5:
            printf("\nSaindo...\n");
            break;
        default:
            printf("\nNumero incorreto, tente novamente\n");
            break;
        }

    } while (opcao != 5);

    return 0;
}   
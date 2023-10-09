/*
1. Faça um programa que cadastre o nome e o salário de 10 funcionário, 
liste todos os dados dos funcionários das seguintes formas: (use o Bubble sort)
a) em ordem crescente de salário;
b) em ordem decrescente de salário;
c) em ordem alfabética;
R.:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h> 

#define TAM 3

typedef struct
{
	char nome[50];
	float salario;
}Funcionario;

void entrada(Funcionario *x);
void saida(Funcionario *x);
void ordenar(Funcionario *x, char op);

int main(void)
{
	char opcao, opcao2;
	Funcionario bd[TAM];
	do
    {
		system("cls");
		printf("1 - Entrada de dados\n");
		printf("2 - Saida de dados\n");
		printf("3 - Sair\n");
		printf("\nDigite uma opcao: ");
		scanf("%c",&opcao);
		fflush(stdin);
		switch(opcao)
        {
			case '1':
				entrada(bd);
				break;
			case '2':
				do
                {
					system("cls");
					printf("1 - Ordem crescente de salario\n");
					printf("2 - Ordem decrescente de salario\n");
					printf("3 - Ordem alfabetica\n");
					printf("4 - Sair\n");
					printf("\nDigite uma opcao: ");
					scanf("%c",&opcao2);
					fflush(stdin);
					switch(opcao2)
                    {
						case '1':
							ordenar(bd,opcao2);
							saida(bd);
							break;
						case '2':
							ordenar(bd,opcao2);
							saida(bd);
							break;
						case '3':
							ordenar(bd,opcao2);
							saida(bd);
							break;
						case '4':
							break;
						default: 
							printf("Erro! Opcao invalida\n");
					}
				}while(opcao2!='4');
				break;
			case '3':
				break;
			default: 
				printf("Erro! Opcao invalida\n");
		}	
	}while(opcao != '3');
	return 0;
}

void entrada(Funcionario *x)
{
	int i;
	for(i=0;i<TAM;i++)
    {
		printf("Digite nome: ");
		gets(x[i].nome);
		fflush(stdin);
		printf("Digite o salario: ");
		scanf("%f",&x[i].salario);
		fflush(stdin);
	}
}

void saida(Funcionario *x)
{
	int i;
	for(i=0;i<TAM;i++){
		printf("%s\t%.2f\n",x[i].nome,x[i].salario);
	}
	getch();
}

void ordenar(Funcionario *x, char op)
{
    int n=1, i, j, troca=1;
    Funcionario aux;

	while (n <= TAM && troca == 1) 
    {
		troca = 0;
		for (i = 0; i < TAM-1; i++) 
        {
	 		switch(op)
            {
	 			case '1':
					if (x[i].salario > x[i + 1].salario) 
                    {
			        	troca = 1;
			            aux = x[i];
			            x[i] = x[i + 1];
			            x[i + 1] = aux;
			        }
			    	break;
			 	case '2':
					if (x[i].salario < x[i + 1].salario) 
                    {
			        	troca = 1;
			            aux = x[i];
			            x[i] = x[i + 1];
			            x[i + 1] = aux;
			        }
			    	break;
				case '3':
					if (strcmp(x[i].nome,x[i + 1].nome) > 0) 
                    {
			        	troca = 1;
			            aux = x[i];
			            x[i] = x[i + 1];
			            x[i + 1] = aux;
			        }
			    	break;
			}
		}
		n++;
	}
}
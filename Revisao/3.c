/*
3)  Uma folha de pagamento simplificada contém os itens: Nome do Funcionário, Salário e Taxa de Desconto de INSS. 
Criar um programa que considere uma taxa de desconto de 8% e mostre no vídeo: 

A)Nome do Funcionário. 

B)Salário bruto 

C)Valor do INSS 

D)Salário líquido. 
*/

#include <stdio.h>
int main () {
    char nome[100]; 
    float salario, inss;

    printf("Digite o nome do funcionário: ");
    scanf("%s", nome);

    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);

    inss = salario * 0.08;

    printf("Nome do funcionário: %s\n", nome);
    printf("Salário bruto: %.2f\n", salario);
    printf("Valor do INSS: %.2f\n", inss);
    printf("Salário líquido: %.2f\n", salario - inss);
}
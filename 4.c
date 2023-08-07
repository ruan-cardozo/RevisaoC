/*
4)Baseando no item anterior, escreva um programa que define uma taxa de desconto de acordo com o seguinte critério: 

A)Salário até R$ 1.000,00 – desconto de 8% 

B)Salário entre R$ 1.000,01 e 1.500,00 – desconto de 8,5% 

C)Salário acima de R$ 1.500,00 – desconto de 9% 

D)O programa deve mostrar o salário em consideração e mostrar sua taxa de desconto, bem como o valor do desconto. 
*/

int main () {
    char nome[100];
    float salario, inss, desconto;

    printf("Digite o nome do funcionário: ");
    scanf("%s", nome);

    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);

    if (salario <= 1000) {
        desconto = 0.08;
    } else if (salario <= 1500) {
        desconto = 0.085;
    } else {
        desconto = 0.09;
    }

    inss = salario * desconto;

    printf("Nome do funcionário: %s\n", nome);
    printf("Salário bruto: %.2f\n", salario);
    printf("Valor do INSS: %.2f\n", inss);
    printf("Salário líquido: %.2f\n", salario - inss);
}
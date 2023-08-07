/* 
13)Se a taxa de juros composto de uma determinada aplicação 
vale 1,25% ao mês, calcular a taxa equivalente no período de 
um ano. Se um valor de R$ 1.000,00 for aplicado com esta taxa, 
qual será o valor final após um ano? 
*/

int main() {
    float taxa = 1.25, valor = 1000;

    for (int i = 0; i < 12; i++) {
        valor += valor * (taxa / 100);
    }

    printf("Valor final: %.2f\n", valor);
}
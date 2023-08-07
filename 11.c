/*
11)Crie um programa que incremente uma variável inteira iniciando em 
0 e terminando em 50, mostrando os valores múltiplos de 8, o número da 
ocorrência em cada exibição e quantas vezes o múltiplo ocorreu. 
*/

int main () {
    int a = 0, contador = 0;

    while (a <= 50) {
        if (a % 8 == 0) {
            contador++;
            printf("Ocorrencia %d: %d\n", contador, a);
        }
        a++;
    }
    printf("O numero de ocorrencias foi: %d\n", contador);
}
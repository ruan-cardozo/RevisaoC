/*
12)Escrever um programa que incremente uma variável iniciando em 0 
e terminando em 200. A cada passagem pela variável, se o valor for 
par, este deverá ser 
acumulado em uma variável e, se for impar, acumulado em outra. 
*/

int main () {
    int a = 0, par = 0, impar = 0;

    while (a <= 200) {
        if (a % 2 == 0) {
            par += a;
        } else {
            impar += a;
        }
        a++;
    }
    printf("A soma dos numeros pares foi: %d\n", par);
    printf("A soma dos numeros impares foi: %d\n", impar);
}
/*
6)Considerando o problema anterior, criar um novo programa que 
incremente uma variável com a mesma faixa de valores, e mostre no 
vídeo somente os números pares ou múltiplos de 6. 
*/

int main () {
    int a = 0;

    while (a <= 100) {
        if (a % 2 == 0 || a % 6 == 0) {
            printf("%d\n", a);
        }
        a++;
    }
}
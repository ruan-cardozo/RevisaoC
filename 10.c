/*
10)Elaborar um programa que mostre os 10 primeiros termos da série de Fibonacci. Esta série é definida pela seguinte regra: A partir do terceiro elemento, cada termo é a soma dos dois anteriores. 
1  2  3  5  8  13  ... 
*/

int main() {
    int a = 0, b = 1, c = 0;

    printf("%d\n", a);
    printf("%d\n", b);

    for (int i = 0; i < 8; i++) {
        c = a + b;
        printf("%d\n", c);
        a = b;
        b = c;
    }
}
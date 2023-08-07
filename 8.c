/* 
8)Escrever um programa que mostre no vídeo a tabuada do 2, do 3 e do 5. 
*/

int main () {
    int a = 0;

    while (a <= 10) {
        printf("2 x %d = %d\n", a, 2 * a);
        a++;
    }

    a = 0;

    while (a <= 10) {
        printf("3 x %d = %d\n", a, 3 * a);
        a++;
    }

    a = 0;

    while (a <= 10) {
        printf("5 x %d = %d\n", a, 5 * a);
        a++;
    }
}
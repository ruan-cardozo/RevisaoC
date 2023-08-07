/*
14)Escreve um programa que contenha duas strings. O programa devera 
mostrar no vídeo a quantidade de caracteres de cada uma. 
*/
int main() {
    char string1[] = "Hello World";
    char string2[] = "Hello World";

    int i = 0;
    while (string1[i] != '\0') {
        i++;
    }
    printf("String 1: %d\n", i);

    i = 0;
    while (string2[i] != '\0') {
        i++;
    }
    printf("String 2: %d\n", i);
}
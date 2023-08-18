
#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int a = 3;
    printf("&a = %p\n",&a);
    printf("a = %i", &a);
    int *b;
    printf("b = %p\n",b);
    printf("*b = %i\n",*b);

    return 0;

}
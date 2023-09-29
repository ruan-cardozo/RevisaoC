#include <stdio.h>
#include <stdlib.h>

int main () {
    char a = 'B', *pa, b = 'C';
    pa = &a;
    printf("a = %c\n", a);
    *pa = 'B';
    b++;
    a--;
    printf("b = %c\n", b);
    a+=3;
    printf("c = %c\n", *pa);
    *pa-=2;
    printf("d = %c\n", *pa);
    return 0;
}
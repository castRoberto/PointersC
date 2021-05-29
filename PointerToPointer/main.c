#include <stdio.h>
#include <stdlib.h>

int main() {
    // First example: Type Pointer
    int a = 1025;
    int* p0 = &a;
    char* p1 = (char*)&a;

    printf("%d\n", a);
    printf("%d\n", *p0);
    printf("%d\n", *p1);
    printf("\n\n");

    // Second example: Pointers to pointers
    int     b  = 10;
    int*    p2 = &b;
    *p2 = 5;
    int**   p3 = &p2;
    int***  p4 = &p3;

    printf("%d\n", *p2);
    printf("%p\n", *p3);
    printf("%d\n", **p3);
    printf("%p\n", **p4);
    printf("%d\n", ***p4);

    ***p4 = 3;
    printf("b = %d\n", b);
    **p3 = *p2 + 2; //Pointer aritmetic
    printf("b = %d\n", b);

    system("PAUSE");
    return 0;
}

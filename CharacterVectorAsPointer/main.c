#include <stdio.h>
#include <stdlib.h>

void myPrint(const char M[]) {
    while(*M != '\0') printf("%c", *(M++));
}

int main() {

    char C[] = "Hello world";
    myPrint(C);

    int B[2][3];
    printf("\n\nMultidemencional: %d", B);
    printf("\nMultidemencional: %d", &B[0][0]);

    return 0;
}

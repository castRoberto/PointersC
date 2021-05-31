#include <stdio.h>
#include <stdlib.h>

void myPrint(const char M[]) {
    while(*M != '\0') printf("%c", *(M++));
}

int main() {
    // C[i] = C+i
    char C[] = "Hello world";
    myPrint(C);

    return 0;
}

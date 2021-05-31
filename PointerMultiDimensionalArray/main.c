#include <stdio.h>
#include <stdlib.h>

void foo(char M[]) {
    while(*M != '\0') printf("%c", *(M++));
}

int main() {

    printf("ARRAY UNIDIMENSIONAL\n");
    int A[5] = {2, 4, 6, 8, 10};
    int* p1 = A; // A es un puntero que referencia la primera posicion del arreglo
    // *(A+i) = A[i]
    // (A+i) = &A[i]
    printf("%d\n", p1);
    printf("%d\n", A); // Nombre de matriz como puntero
    printf("%d\n", *p1); // Desreferencia de p (valor en A[0])
    printf("%d\n\n", *(p1+1)); // Aritmetica de punteros (La unidad aquivale a 4 bytes por ser int el tipo)

    printf("ARRAY BIDIMENSIONAL\n");
    // Se entiende como dos matrices unidimencionales {B[0] y B[1]} -> 1-D arrays de 3 enteros
    int B[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    //  B[0] -> [ 4B | 4B | 4B ] 12 bytes
    //  B[0] -> [ 4B | 4B | 4B ] 12 bytes
    int (*p2)[3] = B;
    printf("%d %d %d\n", B, *B, B[0]);

    printf("\nARRAY TRIDIMENSIONAL\n");
    int C[3][2][2] = {
        {{1, 4}, {7, 10}},
        {{2, 5}, {8, 11}},
        {{3, 6}, {9, 12}}
    };

    // C[i] Punteros a arrays 2-D: C[i] = &C[i] = C+i
    printf("%d %d %d\n", C[0], C[1], C[2]);     // C[i]
    printf("%d %d %d\n", &C[0], &C[1], &C[2]);  // &C[i]
    printf("%d %d %d\n\n", C, C+1, C+2);        // C+i

    // C[i, j] Punteros a arrays 1-D
    printf("%d %d %d\n", C[0][0], C[1][0], C[2][0]);
    printf("%d %d %d\n", C[0][1], C[1][1], C[2][1]);
    printf("%d %d %d\n\n", *C, *(C+1)+1, *(C+2)+1);


    char test[2][5] = {{"Hola"}, {"Holo"}};
    foo(test[1]);

    return 0;
}

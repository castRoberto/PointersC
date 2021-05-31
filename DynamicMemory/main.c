#include <stdio.h>
#include <stdlib.h>

// Uso de memoria dinámica (Heap) en C

void myPrint(const char M[]) {
    while(*M != '\0') printf("%c", *(M++));
}

int main() {

    int a; // Va a stack

    char* p;
    p = (char*)malloc(sizeof(char)); // Recerva 1 Byte en el Heap, retornando un puntero que se almacena en stack
    *p = 20;
    printf("Primer entero guardado en Heap: %d\n", *p);
    free(p); // Se libera el espacio asignado a p en Heap

    p = (char*)malloc(5 * sizeof(char)); // Se recervan nuevas posiciones de memoria en Heap, para un array de caracteres
    p = "Hola";
    myPrint(p);
    free(p);

    return 0;
}

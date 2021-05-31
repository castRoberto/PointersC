#include <iostream>

int main() {

    int a; // Va a Stack

    char* p;
    p = new char;
    *p = 10;
    printf("El primer valor en Heap es: %d\n", *p);
    delete p;

    p = new char[5];
    p = "Hola";
    printf(p);
    delete[] p;


    return 0;
}

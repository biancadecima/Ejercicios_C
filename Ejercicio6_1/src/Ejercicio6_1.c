/*
 ============================================================================
Ejercicio 6-1:
Disponemos de dos variables numéricas (a y b). Realizar un algoritmo que permita el intercambio de valores de dichas variables.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void intercambiarValores(int* a, int* b);

int main(void) {
    int a = 1;
    int b = 2;


    printf("Valor a: %d -- Valor b: %d", a, b);
    intercambiarValores(&a, &b);
    printf("\nINTERCAMBIO. Valor a: %d -- Valor b: %d", a, b);

    return EXIT_SUCCESS;
}

void intercambiarValores(int* a, int* b){
    int auxiliar;

    auxiliar = *a;
    *a = *b;
    *b = auxiliar;
}

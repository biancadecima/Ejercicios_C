/*
 ============================================================================
Ejercicio 3-3:
Crear una función que pida el ingreso de un entero y lo retorne.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int IngresarEntero();

int main(void) {
	setbuf(stdout, NULL);

	int numero;

	numero = IngresarEntero();
	printf("%d", numero);

	return EXIT_SUCCESS;
}

int IngresarEntero() {
	int entero;

	printf("Ingresar numero entero: ");
	scanf("%d", &entero);

	return entero;
}

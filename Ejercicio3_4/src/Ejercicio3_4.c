/*
 ============================================================================
Ejercicio 3-4:
Especializar la función anterior para que permita validar el entero ingresado en un rango determinado.
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

	printf("Ingresar numero entero entre 0 y 9: ");
	scanf("%d", &entero);
	while (entero < 0 || entero > 9) {
		printf("Ingresar numero entero válido: ");
		scanf("%d", &entero);
	}

	return entero;
}

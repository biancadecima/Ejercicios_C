/*
 ============================================================================
Crear una función que permita determinar si un número es par o no.
La función retorna 1 en caso afirmativo y 0 en caso contrario. Probar en el main.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int IdentificarNumeroPar(int);

int main(void) {
	setbuf(stdout, NULL);
	int numero;
	int paridad;

	printf("Ingrese numero: ");
	scanf("%d", &numero);

	paridad = IdentificarNumeroPar(numero);

	if (paridad == 1) {
		printf("El numero ingresado es par");
	} else {
		printf("El numero ingresado es impar");
	}

	return EXIT_SUCCESS;
}

int IdentificarNumeroPar(int numero) {
	int paridad;

	if (numero % 2 == 0) {
		paridad = 1;
	} else {
		paridad = 0;
	}

	return paridad;
}

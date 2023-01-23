/*
 ============================================================================
Ejercicio 2-1: Ingresar 5 números enteros calcular y mostrar el promedio de los números.
Probar la aplicación con distintos valores.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	int contador = 0;
	int acumulador = 0;
	int promedio;

	for (int i = 1; i < 6; i++) {
		printf("Ingrese numero: ");
		scanf("%d", &numero);
		acumulador += numero;
		contador++;
	}

	acumulador += numero;
	promedio = acumulador / contador;

	printf("El promedio de los numeros es: %d", promedio);

	return EXIT_SUCCESS;
}

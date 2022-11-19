/*
 ============================================================================
Crear una funci�n que muestre por pantalla el n�mero flotante  que recibe como par�metro.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void Mostrar(float);

int main(void) {
	setbuf(stdout, NULL);

	float numero;

	printf("Ingrese numero flotante: ");
	scanf("%f", &numero);

	Mostrar(numero);

	return EXIT_SUCCESS;
}

void Mostrar(float flotante) {
	printf("El numero flotante ingresado es: %.2f", flotante);
}

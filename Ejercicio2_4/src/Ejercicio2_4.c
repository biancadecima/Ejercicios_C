/*
 ============================================================================
Ejercicio 2-4:
Ingresar 5 caracteres e informar cuantas letras p (minúsculas) se ingresaron.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	char caracter;
	int contador = 0;
	int contadorP = 0;

	while (contador < 5) {
		printf("\nIngrese un caracter: ");
		fflush(stdin);
		scanf("%c", &caracter);
		if (caracter == 'p') {
			contadorP++;
		}
		contador++;
	}

	printf("Se ingresaron %d letras 'p'", contadorP);

		return EXIT_SUCCESS;
}

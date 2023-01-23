/*
 ============================================================================

Ejercicio 1-3: ingresar 3 números y mostrar el número del medio, sólo si existe.
En caso de que no exista también informarlo.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numeroUno;
	int numeroDos;
	int numeroTres;

	printf("Ingresar numero uno: ");
	scanf("%d", &numeroUno);

	printf("Ingresar numero dos: ");
	scanf("%d", &numeroDos);

	printf("Ingresar numero tres: ");
	scanf("%d", &numeroTres);

	if (numeroUno > numeroDos && numeroUno < numeroTres) {
		printf("El numero del medio es el numero uno");
	} else if ((numeroDos > numeroUno && numeroDos < numeroTres)||(numeroDos < numeroUno && numeroDos > numeroTres)) {
		printf("El numero del medio es el numero dos");
	} else if (numeroTres > numeroUno && numeroTres < numeroDos) {
		printf("El numero del medio es el numero tres");
	} else if (numeroTres == numeroUno || numeroDos == numeroTres
			|| numeroUno == numeroDos) {
		printf("No hay numero del medio");
	}

	return EXIT_SUCCESS;
}

/*
 ============================================================================
Ejercicio 6-3:
Pedirle al usuario su nombre y apellido (en variables separadas, una para el nombre y otra para el apellido).
Ninguna de las dos variables se puede modificar.
Debemos lograr guardar en una tercer variable el apellido y el nombre con el siguiente formato:
Por ejemplo:
Si el nombre es juan ignacio y el apellido es gOmEz, la salida debería ser:
Gomez, Juan Ignacio
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define LEN 100

int main(void) {
	setbuf(stdout,NULL);

	char nombre[LEN];
	char apellido[LEN];
	char auxNombre[LEN] = " ";
	char auxApellido[LEN] = " ";

	printf("Ingrese nombre: ");
	fgets(nombre, LEN, stdin);

	printf("Ingrese apellido: ");
	fgets(apellido, LEN, stdin);

	strcpy(auxNombre, nombre);
	strlwr(auxNombre);
	for (int i = 0; i < LEN; i++) {
		if (i == 0) {
			strupr(auxNombre[i]);
		} else if (auxNombre[i] == ' ') {
			strupr(auxNombre[i + 1]);
		} else {
			strlwr(auxNombre[i]);
		}
	}

	strcpy(auxApellido, apellido);
	for (int i = 0; i < LEN; i++) {
		if (i == 0) {
			strupr(auxApellido[i]);
		} else if (auxApellido[i] == ' ') {
			strupr(auxApellido[i + 1]);
		} else {
			strlwr(auxApellido[i]);
		}
	}

	printf("%s, %s", auxApellido, auxNombre);
	return EXIT_SUCCESS;
}



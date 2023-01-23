/*
 * Ejercicio 18-0:
   Guardar en una variable nombre y apellido. Guardar el dato en un archivo de texto, leerlo y luego mostrarlo.
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "input.h"

#define LEN 50

int main(void) {
	setbuf(stdout,NULL);

	FILE* pArchivo;
	char nombre[LEN];
	int longitud;
	int cantidad;

	pArchivo = fopen("archivo_texto.txt", "w");

	if (pArchivo != NULL) {
		if (getName(nombre, LEN, "ingrese nombre: ", "mal", 3) == 0) {
			longitud = strlen(nombre);
			cantidad = fwrite(nombre, sizeof(char), longitud, pArchivo);
			if(cantidad == longitud){
				printf("Se escribió correctamente\n");
			}
		}
	}

	fclose(pArchivo);

	pArchivo = fopen("archivo_texto.txt", "r");
	if (pArchivo != NULL) {
		while(!feof(pArchivo)){
			longitud = strlen(nombre);
			cantidad = fread(nombre, sizeof(char), longitud, pArchivo);
			if(cantidad != longitud){
				printf("Se leyo bien\n");
				printf("El nomnre es: %s", nombre);
			}
		}
	}



	return EXIT_SUCCESS;
}

<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include "input.h"

static int isNumber(char* cadena);
static int passToInt(int* pResultado);
static int myGets(char* cadena, int longitud);

static int myGets(char *cadena, int longitud) {
	if (cadena != NULL && longitud > 0 && fgets(cadena, longitud, stdin) == cadena) {
		fflush(stdin);
		if (cadena[strlen(cadena) - 1] == '\n')
		{
			cadena[strlen(cadena) - 1] = '\0';
		}
		return 0;
	}
	return -1;
}

static int passToInt(int *pResultado) {
	int retorno = -1;
	char buffer[64];
	if (pResultado != NULL) {
		if (myGets(buffer, sizeof(buffer)) == 0 && isNumber(buffer)) {

			*pResultado = atoi(buffer);
			retorno = 0;
		}

	}
	return retorno;
}

static int isNumber(char *cadena) {
	int i = 0;
	int retorno = 1;
	if (cadena != NULL && strlen(cadena) > 0) {
		while (cadena[i] != '\0') {
			if (cadena[i] < '0' || cadena[i] > '9') {
				retorno = 0;
				break;
			}
			i++;
		}
	}
	return retorno;
}

int getNumber(int *pResultado, char *mensaje, char *mensajeError, int minimo, int maximo, int reintentos){
	int bufferInt;
	int retorno = -1;
	while (reintentos > 0) {
		reintentos--;
		printf("%s", mensaje);
		if (passToInt(&bufferInt) == 0) {
			if (bufferInt >= minimo && bufferInt <= maximo) {
				*pResultado = bufferInt;
				retorno = 0;
				break;
			}
		}
		printf("%s", mensajeError);
	}
	return retorno;
}

=======
#include <stdio.h>
#include <stdlib.h>
#include "input.h"

static int isNumber(char* cadena);
static int passToInt(int* pResultado);
static int myGets(char* cadena, int longitud);

static int myGets(char *cadena, int longitud) {
	if (cadena != NULL && longitud > 0 && fgets(cadena, longitud, stdin) == cadena) {
		fflush(stdin);
		if (cadena[strlen(cadena) - 1] == '\n')
		{
			cadena[strlen(cadena) - 1] = '\0';
		}
		return 0;
	}
	return -1;
}

static int passToInt(int *pResultado) {
	int retorno = -1;
	char buffer[64];
	if (pResultado != NULL) {
		if (myGets(buffer, sizeof(buffer)) == 0 && isNumber(buffer)) {

			*pResultado = atoi(buffer);
			retorno = 0;
		}

	}
	return retorno;
}

static int isNumber(char *cadena) {
	int i = 0;
	int retorno = 1;
	if (cadena != NULL && strlen(cadena) > 0) {
		while (cadena[i] != '\0') {
			if (cadena[i] < '0' || cadena[i] > '9') {
				retorno = 0;
				break;
			}
			i++;
		}
	}
	return retorno;
}

int getNumber(int *pResultado, char *mensaje, char *mensajeError, int minimo, int maximo, int reintentos){
	int bufferInt;
	int retorno = -1;
	while (reintentos > 0) {
		reintentos--;
		printf("%s", mensaje);
		if (passToInt(&bufferInt) == 0) {
			if (bufferInt >= minimo && bufferInt <= maximo) {
				*pResultado = bufferInt;
				retorno = 0;
				break;
			}
		}
		printf("%s", mensajeError);
	}
	return retorno;
}

>>>>>>> 4a18ae68d37b87ba8286e6f575e18340d957ae0f

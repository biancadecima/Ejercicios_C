/*
 ============================================================================
Ejercicio 5-1:
Pedir el ingreso de 5 números. Mostrarlos y calcular la sumatoria de los mismos.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define LEN 5

void PedirNumeros(int array[], int len);
void MostrarNumeros(int array[], int len);
int SumarNumeros(int array[], int len);

int main(void) {
	setbuf(stdout,NULL);
	int numeros[6];
	int acumulador = 0;

	PedirNumeros(numeros, LEN);
	MostrarNumeros(numeros, LEN);
	acumulador = SumarNumeros(numeros, LEN);
	printf("\nLa suma de los numeros ingresados es: %d", acumulador);

	return EXIT_SUCCESS;
}

void PedirNumeros(int array[], int len){
	for (int i = 0; i < len; i++) {
		printf("Ingrese un numero: ");
		scanf("%d", &array[i]);
	}
}

void MostrarNumeros(int array[], int len){
	for(int i=0; i<len; i++){
		printf("Los numeros ingresados son: %d ", array[i]);
	}
}

int SumarNumeros(int array[], int len){
	int acumulador = 0;

	for(int i=0; i<len; i++){
		acumulador += array[i];
	}

	return acumulador;
}

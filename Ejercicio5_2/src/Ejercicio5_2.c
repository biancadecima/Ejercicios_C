/*
 ============================================================================
Ejercicio 5-2:
Pedir el ingreso de 10 números enteros entre -1000 y 1000. Determinar:
Cantidad de positivos y negativos.
Sumatoria de los pares.
El mayor de los impares.
Listado de los números ingresados.
Listado de los números pares.
Listado de los números de las posiciones impares.

Anexo 5-2
Los números que se repiten
Los positivos creciente y los negativos de manera decreciente
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define LEN 10

void PedirNumeros(int array[], int len);
int ContarPositividad(int array[], int len);
int ContarNegatividad(int array[], int len);
int SumarPares(int array[], int len);
int CalcularImparMayor(int array[], int len);
void MostrarNumeros(int array[], int len);
void MostrarPares(int array[], int len);
void MostrarPosicionesImpares(int array[], int len);
void MostrarNumerosRepetidos(int array[], int len);
void bubbleSortIncremental(int array[], int len);
void bubbleSortDecremental(int array[], int len);

int main(void) {
	setbuf(stdout,NULL);

	int numeros[LEN];
	int arrayPositivos[LEN];
	int arrayNegativos[LEN];
	int contadorPositivos = 0;
	int contadorNegativos = 0;
	int positivos;
	int negativos;
	int suma;
	int imparMayor;


	PedirNumeros(numeros, LEN);
	for(int i=0; i<LEN; i++) {
		if(numeros[i] > 0) {
			arrayPositivos[contadorPositivos] = numeros[i];
			contadorPositivos++;
		} else {
			arrayNegativos[contadorNegativos] = numeros[i];
			contadorNegativos++;
			}
	}
	positivos = ContarPositividad(numeros, LEN);
	negativos = ContarNegatividad(numeros, LEN);
	suma = SumarPares(numeros, LEN);
	imparMayor = CalcularImparMayor(numeros, LEN);

	printf("Cantidad de numeros positivos: %d\n", positivos);

	printf("Cantidad de numeros negativos: %d\n", negativos);

	printf("Sumatoria de los numeros pares: %d\n", suma);

	printf("El numero impar mayor: %d\n", imparMayor);

	printf("\nLos numeros ingresados son: ");
	MostrarNumeros(numeros, LEN);

	printf("\nLos numeros pares ingresados son: ");
	MostrarPares(numeros, LEN);

	printf("\nLos numeros en posiciones impares son: ");
	MostrarPosicionesImpares(numeros, LEN);

	printf("\nLos numeros repetidos son: ");
	MostrarNumerosRepetidos(numeros, LEN);

	bubbleSortIncremental(arrayPositivos, contadorPositivos);
	MostrarNumeros(arrayPositivos, contadorPositivos);
	bubbleSortDecremental(arrayNegativos, contadorNegativos);
	MostrarNumeros(arrayNegativos, contadorNegativos);

	return EXIT_SUCCESS;
}

void PedirNumeros(int array[], int len){
	if (array != NULL && len > 0) {
		for (int i = 0; i < len; i++) {
			printf("Ingrese un numero: ");
			scanf("%d", &array[i]);
			while(array[i] > 1000 || array[i] < -1000){
				printf("Ingrese un numero válido: ");
				scanf("%d", &array[i]);
			}
		}
	}

}

int ContarPositividad(int array[], int len){
	int contador = 0;

	for(int i=0; i<len; i++){
		if(array[i]>0){
			contador++;
		}
	}

	return contador;
}

int ContarNegatividad(int array[], int len){
	int contador = 0;

	for(int i=0; i<len; i++){
		if(array[i]<0){
			contador++;
		}
	}

	return contador;
}

int SumarPares(int array[], int len){
	int acumulador = 0;

	for(int i=0; i<len; i++){
		if(array[i] % 2 == 0){
			acumulador += array[i];
		}
	}

	return acumulador;
}

int CalcularImparMayor(int array[], int len){
	int imparMayor;
	int flagImparMayor = 0;

	for(int i=0; i<len; i++){
		if(array[i] % 2 == 1){
			if((array[i] > imparMayor)||(flagImparMayor == 0)){
				imparMayor = array[i];
				flagImparMayor = 1;
			}
		}
	}

	return imparMayor;
}

void MostrarNumeros(int array[], int len){
	for(int i=0; i<len; i++){
		printf("%d ", array[i]);
	}
}

void MostrarPares(int array[], int len){
	for(int i=0; i<len; i++){
		if(array[i] % 2 == 0){
			printf("%d ", array[i]);
		}
	}
}

void MostrarPosicionesImpares(int array[], int len){
	for(int i=0; i<len; i++){
		if(i % 2 == 1){
			printf("%d ", array[i]);
		}
	}
}

void MostrarNumerosRepetidos(int array[], int len){
	for(int i=0; i<len-1; i++){
		for(int j=i+1; j<len; j++){
			if(array[i] == array[j]){
				printf("%d ", array[i]);
			}
		}
	}
}

void bubbleSortIncremental(int array[], int len) { // ordena incremental
	int flagSwap;
	int aux;

	if (array != NULL && len > 0) {
		do {
			flagSwap = 0;
			for (int i = 0; i < len - 1; i++) {
				if (array[i] > array[i + 1]) {
					aux = array[i];
					array[i] = array[i + 1];
					array[i + 1] = aux;
					flagSwap = 1;
				}
			}
		} while (flagSwap);
	}

}

void bubbleSortDecremental(int array[], int len) { // ordena decremental
	int flagSwap;
	int aux;

	if (array != NULL && len > 0) {
		do {
			flagSwap = 0;
			for (int i = 0; i < len - 1; i++) {
				if (array[i] < array[i + 1]) {
					aux = array[i];
					array[i] = array[i + 1];
					array[i + 1] = aux;
					flagSwap = 1;
				}
			}
		} while (flagSwap);
	}

}

/*
 * Ejercicio 5-3:
	Realizar un programa que permita el ingreso de 10 números enteros distintos de cero.
	La carga deberá ser aleatoria (todos los elementos se inicializan en cero por default).
	Determinar el promedio de los positivos, y del menor de los negativos la suma de los antecesores
	(Según la recta numérica de los reales, hasta llegar a cero).
	Utilizar funciones y vectores.
 *
*/
#include <stdio.h>
#include <stdlib.h>

#define LEN 10

void InicializarArray(int array[], int len);
void CargaAleatoria(int array[], int len);
int PromedioPositivos(int array[], int len, float* promedio);
int ArrayNegativos(int array[], int len, int arrayNegativos[]);
int OrdenarIncremental(int array[], int len);
int AcumularArray(int array[], int len, int* acumulador)

int main(void) {
	int numeros[LEN];
	float promedio;
	int negativos[];
	int acumuladorNegativos = 0;

	InicializarArray(numeros, LEN);
	CargaAleatoria(numeros, LEN);
	PromedioPositivos(numeros, LEN, &promedio);
	ArrayNegativos(numeros, LEN, negativos);
	OrdenarIncremental(negativos, LEN);
	AcumularArray(negativos, LEN, &acumuladorNegativos);

	printf("El promedio de los numeros positivos ingresados es: %.2f", promedio);
	printf("Del menor de los negativos la suma de los antecesores es: %d", acumuladorNegativos);

	return EXIT_SUCCESS;
}

void InicializarArray(int array[], int len){
	for(int i=0; i<len; i++){
		array[i] = 0;
	}
}

void CargaAleatoria(int array[], int len){
	int i;
	int contador = 0;

	do{
		getNumber(&i, "Ingrese el indice del array en el que quiere ingresar el numero: ", "Error", 0, 9, 3);
		printf("Ingrese un numero distinto a cero");
		scanf("%d", array[i]);
		while(array[i] == 0){
			printf("Error, no acepta cero. Reingrese: ");
			scanf("%d", array[i]);
		}
		contador++;
	}while(contador == 9);
}

int PromedioPositivos(int array[], int len, float* promedio){
	int rtn = 0;
	int acumulador = 0;

	if (array != NULL && len > 0) {
		for (int i = 0; i < len; i++) {
			if (array[i] > 0) {
				acumulador += array[i];
			}
		}
		rtn = 1;
	}
	&promedio = (float) acumulador / len;

	return rtn;
}

int ArrayNegativos(int array[], int len, int arrayNegativos[]){
	int rtn = 0;
	int contador = 0;

	if (array != NULL && len > 0){
		for(int i=0; i<len; i++){
			if(array[i]<0){
				arrayNegativos[contador] = array[i];
				contador++;
			}
		}
		rtn = 1;
	}
	return rtn;
}

int OrdenarIncremental(int array[], int len){
	int rtn = 0;
	int swap;
	int aux;

		if (array != NULL && len > 0) {
			do {
			swap = 0;
			for (int i = 0; i < len - 1; i++) {
				if (array[i] > array[i + 1]) {
					aux = array[i];
					array[i] = array[i + 1];
					array[i + 1] = aux;
					swap = 1;
				}
			}
		} while (swap);
		rtn = 1;
		}
	return rtn;
}

int AcumularArray(int array[], int len, int* acumulador){
	int rtn = 0;

	if (array != NULL && len > 0) {
		for(int i = 0; i < len; i++){
			&acumulador += array[i];
		}
		rtn = 1;
	}

	return rtn;
}

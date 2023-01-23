/*
 ============================================================================
Ingresar 10 números enteros, distintos de cero. Mostrar:
Cantidad de pares e impares.
El menor número ingresado.
De los pares el mayor número ingresado.
Suma de los positivos.
Producto de los negativos.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int inicializador = 0;
	int numero;
	int contadorPares = 0;
	int contadorImpares = 0;
	int banderaMenorNumero = 0;
	int menorNumero;
	int banderaMayorPar = 0;
	int mayorPar;
	int acumuladorPositivos = 0;
	int productoNegativos = 1;

	while (inicializador < 10) {
		printf("Ingrese numero: ");
		scanf("%d", &numero);
		while (numero == 0) {
			printf("Ingrese numero valido: ");
			scanf("%d", &numero);
		}

		if (numero % 2 == 0) {
			contadorPares++;
			if ((mayorPar < numero) || banderaMayorPar == 0) {
				mayorPar = numero;
				banderaMayorPar = 1;
			}
		} else {
			contadorImpares++;
		}

		if ((menorNumero > numero) || banderaMenorNumero == 0) {
			menorNumero = numero;
			banderaMenorNumero = 1;
		}

		if (numero > 0) {
			acumuladorPositivos += numero;
		} else {
			productoNegativos = productoNegativos * numero;
		}

		inicializador++;
	}

	printf("Cantidad de pares: %d ", contadorPares);
	printf("Cantidad de impares: %d", contadorImpares);
	printf("El menor número ingresado: %d", menorNumero);
	printf("De los pares el mayor número ingresado: %d", mayorPar);
	printf("Suma de los positivos: %d", acumuladorPositivos);
	printf("Producto de los negativos: %d", productoNegativos);

	return EXIT_SUCCESS;
}

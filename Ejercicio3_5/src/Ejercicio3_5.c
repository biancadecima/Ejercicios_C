/*
 ============================================================================
Realizar un programa en donde se puedan utilizar los prototipos de la función Sumar en sus 4 combinaciones.
int Sumar1(int, int);
int Sumar2(void);
void Sumar3(int, int);
void Sumar4(void);
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int Sumar1(int, int);
int Sumar2(void);
void Sumar3(int, int);
void Sumar4(void);

int main() {
	setbuf(stdout, NULL);

	int numeroUno;
	int numeroDos;
	int resultado1;
	int resultado2;

	printf("Ingrese un numero: ");
	scanf("%d", &numeroUno);
	printf("Ingrese otro numero: ");
	scanf("%d", &numeroDos);
	resultado1 = Sumar1(numeroUno, numeroDos);
	printf("Resultado de Suma1: %d\n", resultado1);

	resultado2 = Sumar2();
	printf("Resultado de Sumar2: %d\n", resultado2);

	Sumar3(numeroUno, numeroDos);

	Sumar4();

	return EXIT_SUCCESS;
}

int Sumar1(int numero, int otroNumero) {
	int resultado;

	resultado = numero + otroNumero;

	return resultado;
}

int Sumar2(void) {
	int numeroUno;
	int numeroDos;
	int resultado;

	printf("Ingrese un numero: ");
	scanf("%d", &numeroUno);
	printf("Ingrese otro numero: ");
	scanf("%d", &numeroDos);

	resultado = numeroUno + numeroDos;

	return resultado;
}

void Sumar3(int numero, int otroNumero) {
	int resultado;

	resultado = numero + otroNumero;
	printf("Resultado de Sumar3: %d\n", resultado);
}

void Sumar4(void) {
	int numeroUno;
	int numeroDos;
	int resultado;

	printf("Ingrese un numero: ");
	scanf("%d", &numeroUno);
	printf("Ingrese otro numero: ");
	scanf("%d", &numeroDos);

	resultado = numeroUno + numeroDos;

	printf("Resultado de Sumar4: %d\n", resultado);
}


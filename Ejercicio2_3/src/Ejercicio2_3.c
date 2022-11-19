/*
 ============================================================================
Ejercicio 2-3:
Debemos alquilar el servicio de transporte para llegar a Mar del Plata con un grupo de personas (no m�s de 100), de cada persona debemos obtener los siguientes datos:
n�mero de cliente,
estado civil ('s' para soltero", 'c' para casado o 'v' viudo),
edad( solo mayores de edad, m�s de 17),
temperatura corporal (validar por favor)
y genero('f' para femenino, 'm' para masculino, 'o' para no binario).
NOTA: El precio por pasajero es de $600.
Se debe informar (solo si corresponde):
a) La cantidad de personas con estado  civil"viudo" de m�s de 60 a�os.
b) el n�mero de cliente y edad de la mujer soltera m�s joven.
c) cu�nto sale el viaje total sin descuento.
d) si hay m�s del 50% de los pasajeros que tiene m�s de 60 a�os , el precio final tiene un descuento del 25%, que solo mostramos si corresponde.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	char respuesta;
	char estadoCivil;
	int edad;
	int temperatura;
	char genero;
	int contadorViudoAdulto = 0;
	int cliente = 0;
	int banderaSolteraJoven = 1;
	int clienteSolteraJoven;
	int edadSolteraJoven;
	int precioViaje = 600;
	int precioTotal;
	int contadorAdulto = 0;
	float descuento = 0.75;
	float precioTotalDescuento;

	do {
		printf("Ingrese estado civil: ");
		fflush(stdin);
		scanf("%c", &estadoCivil);
		while (estadoCivil != 's' && estadoCivil != 'c' && estadoCivil != 'v') {
			printf("\nIngrese estado civil v�lido: ");
			fflush(stdin);
			scanf("%c", &estadoCivil);
		}

		printf("Ingrese edad: ");
		scanf("%d", &edad);
		while (edad < 17) {
			printf("Ingrese edad v�lida: ");
			scanf("%d", &edad);
		}

		printf("Ingrese temperatura corporal: ");
		scanf("%d", &temperatura);
		while (temperatura < 28 && temperatura > 41) {
			printf("Ingrese temperatura v�lida: ");
			scanf("%d", &temperatura);
		}

		printf("Ingrese genero: ");
		fflush(stdin);
		scanf("%c", &genero);
		while (genero != 'm' && genero != 'f' && genero != 'o') {
			printf("Ingrese genero v�lido: ");
			fflush(stdin);
			scanf("%c", &genero);
		}

		printf("Desea seguir ingresando pasajeros?: ");
		fflush(stdin);
		scanf("%c", &respuesta);
		while (respuesta == 's' && respuesta == 'n') {
			printf("Ingrese respuesta v�lida: ");
			fflush(stdin);
			scanf("%c", &respuesta);
		}

		cliente++;

		if (edad > 60) {
			contadorAdulto++;
			if (estadoCivil == 'v') {
				contadorViudoAdulto++;
			}
		}

		if ((estadoCivil == 's' && genero == 'm' && edadSolteraJoven < edad)
				|| banderaSolteraJoven == 1) {
			clienteSolteraJoven = cliente;
			edadSolteraJoven = edad;
			banderaSolteraJoven = 0;
		}

	} while (respuesta == 's');

	precioTotal = cliente * precioViaje;

	printf(
			"La cantidad de personas con estado civil viudo de m�s de 60 a�os es de: %d\n",
			contadorViudoAdulto);
	printf(
			"El n�mero de cliente y edad de la mujer soltera m�s joven es %d y de %d a�os\n",
			clienteSolteraJoven, edadSolteraJoven);
	printf("Precio del viaje total sin descuento: %d\n", precioTotal);

	if (cliente / 2 < contadorAdulto) {
		precioTotalDescuento = (cliente * precioViaje) * descuento;
		printf("El precio total con descuento es de %f", precioTotalDescuento);
	}

	return EXIT_SUCCESS;
}

/*
 ============================================================================
Ejercicio 8-1:
Crear la estructura Jugador (nombre, goles metidos, partidos jugados, promedio de goles).
Crear una función que permita cargar los datos de un jugador y otra que los muestre.
Una tercera función calculará el promedio de goles.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define LEN 50

typedef struct{
		char nombre[LEN];
		int golesMetidos;
		int partidosJugados;
		float promedioGolesPartidos;
		int isEmpty;
	}jugador;

jugador CargarJugador(int size);
float CalcularPromedio(jugador UnJugador);
void MostrarJugador(jugador UnJugador);

int main(void) {
	setbuf(stdout,NULL);

	jugador MiJugador;

	MiJugador = CargarJugador(LEN);
	MiJugador.promedioGolesPartidos = CalcularPromedio(MiJugador);
	MostrarJugador(MiJugador);

	return EXIT_SUCCESS;
}

jugador CargarJugador(int size){
	jugador UnJugador;

	printf("Ingrese el nombre del jugador: ");
	fgets(UnJugador.nombre, size, stdin);

	printf("\nIngrese goles metidos del jugador: ");
	scanf("%d", &UnJugador.golesMetidos);

	printf("\nIngrese partidos jugados del jugador: ");
	scanf("%d", &UnJugador.partidosJugados);

	return UnJugador;
}

float CalcularPromedio(jugador UnJugador){
	float promedio;

	promedio = (float) UnJugador.golesMetidos / UnJugador.partidosJugados;

	return promedio;
}

void MostrarJugador(jugador UnJugador){

	printf("\n--- DATOS DEL JUGADOR ---");
	printf("\nEl nombre del jugador es: %s", UnJugador.nombre);
	printf("Los goles metidos del jugador son: %d", UnJugador.golesMetidos);
	printf("\nLos partidos jugados del jugador son: %d", UnJugador.partidosJugados);
	printf("\nEl promedio de goles por partidos jugados del jugador es: %.2f", UnJugador.promedioGolesPartidos);
}



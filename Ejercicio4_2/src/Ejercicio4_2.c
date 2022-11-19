/*
 ============================================================================
Ejercicio 4-2:
Realizar un programa que permita la carga de temperaturas en celsius y fahrenheit ,
validando que las temperaturas ingresadas estén entre el punto de congelación y ebullición del agua para cada tipo de escala.
Las validaciones se hacen en una biblioteca.
Las funciones de transformación de fahrenheit a celsius y de celsius a fahrenheit se hacen en otra biblioteca.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "validacion.h"
#include "conversor.h"

int main(void) {
	setbuf(stdout,NULL);

	float fahrenheit;
	float celsius;
	float toCelsius;
	float toFahrenheit;

	fahrenheit = PedirFahrenheit();
	celsius = PedirCelcius();

	toCelsius = ConversorFahrenheitACelsius(fahrenheit);
	toFahrenheit = ConversorCelsiusAFahrenheit(celsius);

	printf("El paso de %.2f °F a celsius es de %.2f °C\n", fahrenheit,
			toCelsius);
	printf("El paso de %.2f °C a fahrenheit es de %.2f °F", celsius,
			toFahrenheit);

	return EXIT_SUCCESS;
}

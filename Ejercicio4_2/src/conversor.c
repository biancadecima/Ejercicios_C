<<<<<<< HEAD
#include "conversor.h"
#include <stdio.h>

float ConversorFahrenheitACelsius(float fahrenheit){
    float celsius;

    celsius = (fahrenheit - 32) * 5/9;

    return celsius;
}

float ConversorCelsiusAFahrenheit(float celsius){
    float fahrenheit;

    fahrenheit = (celsius * 9/5) + 32;

    return fahrenheit;
}
=======
#include "conversor.h"
#include <stdio.h>

float ConversorFahrenheitACelsius(float fahrenheit){
    float celsius;

    celsius = (fahrenheit - 32) * 5/9;

    return celsius;
}

float ConversorCelsiusAFahrenheit(float celsius){
    float fahrenheit;

    fahrenheit = (celsius * 9/5) + 32;

    return fahrenheit;
}
>>>>>>> 4a18ae68d37b87ba8286e6f575e18340d957ae0f

<<<<<<< HEAD
#include "validacion.h"
#include <stdio.h>

float PedirCelcius(){
    float celsius;

    printf("Ingrese su temperatura en grados celsius: ");
    scanf("%f", &celsius);
    while(celsius > 100 || celsius < 0){
        printf("Ingrese una temperatura celsius v�lida: ");
        scanf("%f", &celsius);
    }

    return celsius;
}

float PedirFahrenheit(){
    float fahrenheit;

    printf("Ingrese su temperatura en grados fahrenheit: ");
    scanf("%f", &fahrenheit);
    while(fahrenheit > 212 || fahrenheit < 32){
        printf("Ingrese una temperatura fahrenheit v�lida: ");
        scanf("%f", &fahrenheit);
    }

    return fahrenheit;
}


=======
#include "validacion.h"
#include <stdio.h>

float PedirCelcius(){
    float celsius;

    printf("Ingrese su temperatura en grados celsius: ");
    scanf("%f", &celsius);
    while(celsius > 100 || celsius < 0){
        printf("Ingrese una temperatura celsius v�lida: ");
        scanf("%f", &celsius);
    }

    return celsius;
}

float PedirFahrenheit(){
    float fahrenheit;

    printf("Ingrese su temperatura en grados fahrenheit: ");
    scanf("%f", &fahrenheit);
    while(fahrenheit > 212 || fahrenheit < 32){
        printf("Ingrese una temperatura fahrenheit v�lida: ");
        scanf("%f", &fahrenheit);
    }

    return fahrenheit;
}


>>>>>>> 4a18ae68d37b87ba8286e6f575e18340d957ae0f

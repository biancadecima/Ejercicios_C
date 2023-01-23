/******************************************************************************

Ejercicio 4-1:
Realizar un programa EN EL MAIN que permita calcular y mostrar el factorial de un número.
Por ejemplo:
5! = 5*4*3*2*1 = 120


*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int PedirNumero();
int CalcularFactorial(int);

int main()
{
	setbuf(stdout,NULL);

    int numero;
    int factorial;

    numero = PedirNumero();
    factorial = CalcularFactorial(numero);

    printf("Su factorial es: %d", factorial);

    return 0;
}

int PedirNumero(){
    int numero;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    return numero;
}

int CalcularFactorial(int a){
    int factorial;

    if(a<2){
        return 1;
    }

    factorial = a * CalcularFactorial(a-1);

    return factorial;
}

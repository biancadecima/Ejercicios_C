/*
 ============================================================================
Ejercicio 6-2:
Realizar un programa que permita el ingreso de 10 números enteros (positivos y negativos).
Necesito generar un listado de los números positivos de manera creciente y negativos de manera decreciente. (Como máximo 5 estructuras repetitivas)
Ejemplo:
Listado 1 : 4, 5, 6, 10, 18, 29
Listado 2 : -1,-5,-9,-12
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define LEN 10

int main(void) {
	int numeros[LEN];

	    for(int i = 0; i<LEN; i++){
	        printf("\nIngrese numero: ");
	        scanf("%d", &numeros[i]);
	    }

	    for(int i = 0; i<LEN; i++){
	        if(numeros[i]>0){
	            for(int i = 0; i<LEN-1; i++){
	                for(int j = i+1; j<LEN; j++){
	                    if(numeros[i]>0 && numeros[j]>0){
	                       if(numeros[i]>numeros[j]) {
	                        int aux;

	                        aux = numeros[i];
	                        numeros[i] = numeros[j];
	                        numeros[j] = aux;
	                        }
	                    }
	                }
	            }
	            printf("\nListado 1: %d ", numeros[i]);
	        }else{
	            for(int i = 0; i<LEN-1; i++){
	                for(int j = i+1; j<LEN; j++){
	                    if(numeros[i]<0 && numeros[j]<0){
	                        if(numeros[i]<numeros[j]){
	                            int aux;

	                            aux = numeros[i];
	                            numeros[i] = numeros[j];
	                            numeros[j] = aux;
	                        }
	                    }

	                }
	            }
	            printf("\nListado 2: %d ", numeros[i]);
	        }
	   }
	   return EXIT_SUCCESS;
}

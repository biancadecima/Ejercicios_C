/*
 * Ejercicio 18-1:
	Crear una funci�n que reciba como par�metros un array con 5 nombres (que estar�n previamente hardcodearlos).
	La funci�n deber� guardar la lista de nombres en un archivo de texto.
	int EscribirNombresTXT(char* nombres, char* path);
	Otra funci�n se encargar� de la lectura de dicha lista.
	int LeerNombresTXT(char* nombres, char* path);
 *
 * */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int EscribirNombresTXT(char* nombres[], char* path);
int LeerNombresTXT(char* nombres[], char* path);

int main(void) {
	setbuf(stdout,NULL);

	FILE* pArchivo;
	char nombres[5][30] = {"bianca ", "bianqui ", "bian ", "bin ", "cabian"};

	pArchivo = fopen("archivo_texto.txt", "w");
	if(pArchivo != NULL){
		EscribirNombresTXT(nombres, pArchivo);
	}
	fclose(pArchivo);

	pArchivo = fopen("archivo_texto.txt", "r");
	if(pArchivo != NULL){
		while(!feof(pArchivo)){
			LeerNombresTXT(nombres, "archivo_texto.txt");
		}
	}
	fclose(pArchivo);

	return EXIT_SUCCESS;
}

int EscribirNombresTXT(char* nombres[], char* path){
	int rtn = 0;
	int longitud;
	int cantidad;

	for(int i=0; i<5; i++){
		longitud = strlen(nombres[i]);
		cantidad = fwrite(nombres[i], sizeof(char), longitud, path);
		if(longitud == cantidad){
			printf("Se escribio correctamente\n");
		}
	}

	return rtn;
}

int LeerNombresTXT(char* nombres[], char* path){
	int rtn = 0;
	int longitud;
	int cantidad;

	for (int i = 0; i < 5; i++) {
		longitud = strlen(nombres[i]);
		cantidad = fread(nombres[i], sizeof(char), longitud, path);
		if (longitud == cantidad) {
			printf("Se ley� correctamente\n");
		}
	}


	return rtn;
}

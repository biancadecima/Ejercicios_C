/*
 ============================================================================
Una empresa importadora que comercializa productos Apple, decide registrar de sus productos los siguientes datos:
	idProducto (numerico)
	descripcion (alfanumérico)
	nacionalidad (numérico, por el momento utilizaremos un define: EEUU - CHINA - OTRO)
	tipo (numérico, por el momento utilizaremos un define: IPHONE -MAC - IPAD - ACCESORIOS)
	precio (numérico decimal)
Realizar un programa que permita interactuar con un menú de usuarios con las siguientes opciones:
	ALTA Producto: Se ingresan los datos de UN solo producto. Siempre y cuando haya espacio disponible en el array.
	BAJA Producto: A partir del ingreso del ID. Si existe el producto desaparece de la lista, dejando espacio disponible para un nuevo producto.
	MODIFICACIÓN Producto: A partir del ingreso del ID. Si existe se podrá modificar el precio o el tipo.
	LISTADO Productos.
	LISTADO ordenado por precio.
	LISTADO ordenado por descripción.
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "product.h"

#define LEN 3

int main(void) {
	setbuf(stdout,NULL);

	int option;
	producto productos[LEN];
	initProductos(productos, LEN);

	do{
		printf("1. ALTA Producto: Se ingresan los datos de UN solo producto. Siempre y cuando haya espacio disponible en el array "
				"2. BAJA Producto: A partir del ingreso del ID. Si existe el producto desaparece de la lista, dejando espacio disponible para un nuevo producto."
				"3 MODIFICACIÓN Producto: A partir del ingreso del ID. Si existe se podrá modificar el precio o el tipo."
				"4 LISTADO Productos."
				"5 LISTADO ordenado por precio."
				"6 LISTADO ordenado por descripción");
		scanf("%d", &option);
		switch(option){
		case 1://alta
			loadProducto(productos, LEN);
			break;
		case 2://baja
			deleteProducto(productos, LEN);
			break;
		case 3://modificacion
			modifyProducto(productos, LEN);
			break;
		case 4:
			listarProductos(productos, LEN);
			break;
		case 5:
			break;
		case 6:
			break;
		case 7://salir
			break;
		}
	}while(option != 7);

	return EXIT_SUCCESS;
}

/*
 ============================================================================
Una empresa importadora que comercializa productos Apple, decide registrar de sus productos los siguientes datos:
	idProducto (numerico)
	descripcion (alfanum�rico)
	nacionalidad (num�rico, por el momento utilizaremos un define: EEUU - CHINA - OTRO)
	tipo (num�rico, por el momento utilizaremos un define: IPHONE -MAC - IPAD - ACCESORIOS)
	precio (num�rico decimal)
Realizar un programa que permita interactuar con un men� de usuarios con las siguientes opciones:
	ALTA Producto: Se ingresan los datos de UN solo producto. Siempre y cuando haya espacio disponible en el array.
	BAJA Producto: A partir del ingreso del ID. Si existe el producto desaparece de la lista, dejando espacio disponible para un nuevo producto.
	MODIFICACI�N Producto: A partir del ingreso del ID. Si existe se podr� modificar el precio o el tipo.
	LISTADO Productos.
	LISTADO ordenado por precio.
	LISTADO ordenado por descripci�n.
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
				"3 MODIFICACI�N Producto: A partir del ingreso del ID. Si existe se podr� modificar el precio o el tipo."
				"4 LISTADO Productos."
				"5 LISTADO ordenado por precio."
				"6 LISTADO ordenado por descripci�n");
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

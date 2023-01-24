<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include "product.h"

int initProductos(producto productos[], int len) {
	int rtn = 0;
	int i;

	if (productos != NULL && len > 0) {
		for (i = 0; i < len; i++) {
			productos[i].isEmpty = 0;
		}
		rtn = 1;
	}
	return rtn;
}


int findIsEmpty(producto productos[], int len) {
	int rtn = -1;//si no encuentra nada retorna -1
	int i;

	if (productos != NULL && len > 0) {
		for (i = 0; i < len; i++) {
			if(productos[i].isEmpty == FREE){
				rtn = i;// retorna el indice de donde encontro un espacio vacio
				break; //para romper las siguientes iteraciones del for una vez que se cumpla la condicion del if
			}
		}
	}

	return rtn;
}

int loadProducto(producto productos[], int len) {
	int rtn = 0;
	producto aux; // un auxiliar para asegurarnos que este todo bien cargado
	int i;

	if (productos != NULL && len > 0) {
		i = findIsEmpty(productos, LEN);
		if (i != -1) {
			printf("Ingrese le ID del producto: ");
			scanf("%d", &aux.idProduct);

			printf("Ingrese descripcion del producto: ");
			fpurge(stdin);
			scanf("%s", aux.descripcion);

			printf("ingrese nacvionalidad");
			scanf("%d", &aux.nacionalidad);

			printf("ingrese tipo: ");
			scanf("%d", &aux.tipo);

			printf("ingrese precio: ");
			scanf(".2f", &aux.precio);

			aux.isEmpty = 1;
		}
		productos[i] = aux;
		rtn = 1;
	}
	return rtn;
}

int findByIDProducto(producto productos[], int len, int idProd) {
	int rtn = -1; // para hacer if i<0 el id no existe
	int i;

	if (productos != NULL && len > 0 && idProd > 0) {
		for (i = 0; i < len; i++) {
			if (productos[i].idProduct == idProd) {
				rtn = i;
				break; //para romper las siguientes iteraciones del for una vez que se cumpla la condicion del if
			}
		}
	}
	return rtn;
}

int deleteProducto(producto productos[], int len) {// para borrar un prod primero le muestro todo lo que tenga
	int rtn = 0;
	int id;
	int i;

	printf("id para eliminar prod: ");
	scanf("%d", &id);

	if (productos != NULL && len > 0 && id < 1) {
		i = findByIDProducto(productos, LEN, id);
		if (i!=-1) {
			productos[i].isEmpty = FREE;
		}
		rtn = 1;
	}
	return rtn;
}

int modifyProducto(producto productos[], int len) {// para borrar un prod primero le muestro todo lo que tenga
	int rtn = 0;
	int id;
	int i;
	int option;

	printf("id para modificar prod: ");
	scanf("%d", &id);

	if (productos != NULL && len > 0 && id < 1) {
		i = findByIDProducto(productos, LEN, id);
		if (i!=-1) {
			printf("modificar 1. precio 2.tipo");
			scanf("%d", &option);
			switch (option) {
			case 1:
				printf("ingrese precio: ");
				scanf(".2f", &productos[i].precio);
				break;
			case 2:
				printf("ingrese tipo: ");
				scanf("%d", &productos[i].tipo);
				break;
			}
		}
		rtn = 1;
	}
	return rtn;
}

void mostrarProductos(producto producto){
	printf("%s, %d, %d, %2.f, %d \n", producto.descripcion, producto.idProduct, producto.nacionalidad, producto.precio, producto.tipo);
}

int listarProductos(producto productos[], int len){
	int rtn = 0;

	if (productos != NULL && len > 0) {
		for(int i = 0; i < len; i++){
			if(productos[i].isEmpty == 1){
				mostrarProductos(productos[i]);
			}
		}
		rtn = 1;
	}
	return rtn;
}
=======
#include <stdio.h>
#include <stdlib.h>
#include "product.h"

int initProductos(producto productos[], int len) {
	int rtn = 0;
	int i;

	if (productos != NULL && len > 0) {
		for (i = 0; i < len; i++) {
			productos[i].isEmpty = 0;
		}
		rtn = 1;
	}
	return rtn;
}


int findIsEmpty(producto productos[], int len) {
	int rtn = -1;//si no encuentra nada retorna -1
	int i;

	if (productos != NULL && len > 0) {
		for (i = 0; i < len; i++) {
			if(productos[i].isEmpty == FREE){
				rtn = i;// retorna el indice de donde encontro un espacio vacio
				break; //para romper las siguientes iteraciones del for una vez que se cumpla la condicion del if
			}
		}
	}

	return rtn;
}

int loadProducto(producto productos[], int len) {
	int rtn = 0;
	producto aux; // un auxiliar para asegurarnos que este todo bien cargado
	int i;

	if (productos != NULL && len > 0) {
		i = findIsEmpty(productos, LEN);
		if (i != -1) {
			printf("Ingrese le ID del producto: ");
			scanf("%d", &aux.idProduct);

			printf("Ingrese descripcion del producto: ");
			fpurge(stdin);
			scanf("%s", aux.descripcion);

			printf("ingrese nacvionalidad");
			scanf("%d", &aux.nacionalidad);

			printf("ingrese tipo: ");
			scanf("%d", &aux.tipo);

			printf("ingrese precio: ");
			scanf(".2f", &aux.precio);

			aux.isEmpty = 1;
		}
		productos[i] = aux;
		rtn = 1;
	}
	return rtn;
}

int findByIDProducto(producto productos[], int len, int idProd) {
	int rtn = -1; // para hacer if i<0 el id no existe
	int i;

	if (productos != NULL && len > 0 && idProd > 0) {
		for (i = 0; i < len; i++) {
			if (productos[i].idProduct == idProd) {
				rtn = i;
				break; //para romper las siguientes iteraciones del for una vez que se cumpla la condicion del if
			}
		}
	}
	return rtn;
}

int deleteProducto(producto productos[], int len) {// para borrar un prod primero le muestro todo lo que tenga
	int rtn = 0;
	int id;
	int i;

	printf("id para eliminar prod: ");
	scanf("%d", &id);

	if (productos != NULL && len > 0 && id < 1) {
		i = findByIDProducto(productos, LEN, id);
		if (i!=-1) {
			productos[i].isEmpty = FREE;
		}
		rtn = 1;
	}
	return rtn;
}

int modifyProducto(producto productos[], int len) {// para borrar un prod primero le muestro todo lo que tenga
	int rtn = 0;
	int id;
	int i;
	int option;

	printf("id para modificar prod: ");
	scanf("%d", &id);

	if (productos != NULL && len > 0 && id < 1) {
		i = findByIDProducto(productos, LEN, id);
		if (i!=-1) {
			printf("modificar 1. precio 2.tipo");
			scanf("%d", &option);
			switch (option) {
			case 1:
				printf("ingrese precio: ");
				scanf(".2f", &productos[i].precio);
				break;
			case 2:
				printf("ingrese tipo: ");
				scanf("%d", &productos[i].tipo);
				break;
			}
		}
		rtn = 1;
	}
	return rtn;
}

void mostrarProductos(producto producto){
	printf("%s, %d, %d, %2.f, %d \n", producto.descripcion, producto.idProduct, producto.nacionalidad, producto.precio, producto.tipo);
}

int listarProductos(producto productos[], int len){
	int rtn = 0;

	if (productos != NULL && len > 0) {
		for(int i = 0; i < len; i++){
			if(productos[i].isEmpty == 1){
				mostrarProductos(productos[i]);
			}
		}
		rtn = 1;
	}
	return rtn;
}
>>>>>>> 4a18ae68d37b87ba8286e6f575e18340d957ae0f

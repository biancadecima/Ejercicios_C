#ifndef PROD_H_
#define PROD_H_

typedef struct {
	int idProduct;
	char descripcion[500];
	int nacionalidad;
	int tipo;
	float precio;
	int isEmpty;
} producto;

#define FREE 0
#define OCCUPIED 1

//nacionalidad
#define EEUU 1
#define CHINA 2
#define OTRO 3
//tipo
#define IPHONE 1
#define MAC 2
#define IPAD 3
#define ACCESORIO 4

//si tengo una struct relacionada, tengo que modify todas las fx donde se muestre
int initProductos(producto productos[], int len);
int findIsEmpty(producto productos[], int len);
int loadProducto(producto productos[], int len);// en el alta debo mostrar que significa cada id para que el usurio sepa que id quiere cargar
/*
	int mostrarLocalidades(eLocalidad localidades[], int tam){
		if(localidades != NULL && tam >0){
			for(int i=0; i<tam; i++){
				printf("%d %s", localidades[i].id,  localidades[i].descripcion);
			}
		}
	}

*/
//podria hacer una fx donde haga una busqueda del arrayLoc en la cual verifique que el idLoc ingresado existe
int findByIDProducto(producto productos[], int len, int idProd);
int deleteProducto(producto productos[], int len); // tambien le cambio los param si quiero que muestre, ademas si quiero deletear, tengo que deletear de la otras struct tmb
int modifyProducto(producto productos[], int len); // tambien le cambio los param si quiero que muestre, ademas si quiero modify, tengo que deletear de la otras struct tmb
/* creo una fx que por el fk de la principal encuentre la coincidencia en el pk de la struct relacionada
cargarDescripcionLocalidad(eLocalidad localidades[], int tam, int idLocalidad, char descripcion[]){
	if(localidades != NULL && descxripcion != NULL && tam >0){
		for(int i=0; i<tam; i++){
			if(localidades[i].id == idLocalidad){
				strcpy(descripcion, localidades[i].descripcion);
				break;
			}
		}
	}
}
*/
void mostrarProductos(producto producto); //le paso la nueva struct y el len
int listarProductos(producto productos[], int len);//le paso la nueva struct y el len

#endif /* PROD_H_ */

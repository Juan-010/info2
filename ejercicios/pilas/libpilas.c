#include "pilas.h"
#include <stdio.h>
#include <stdlib.h>

void push(ptrNodoPila * ptrCima, char valor){
	ptrNodoPila ptrNuevo = malloc(sizeof(NodoPila));
	if (ptrNuevo != NULL) {
	ptrNuevo -> dato = valor;
	ptrNuevo -> ptrSig = *ptrCima;
	*ptrCima = ptrNuevo;	
	}
	else {
		fprintf(stderr, "No se ha podido añadir por falta de memoria\n"); 
	}
}
int pop(ptrNodoPila * ptrCima){
	if (!isEmpty(*ptrCima)) {
		ptrNodoPila tmpPtr = *ptrCima;
		*ptrCima = (*ptrCima) -> ptrSig;
		free(tmpPtr);
		return 0;
	}
	else {
		fprintf(stderr, "No se puede borrar porque la pila está vacía\n");
		return 1;
	}
}	
int isEmpty(ptrNodoPila ptrCima){
	return ptrCima == NULL;
}
void printPila(ptrNodoPila ptrCima){
	ptrNodoPila ptrActual = ptrCima;

	while (ptrActual != NULL){
		printf("%c ---> ", ptrActual -> dato);
		ptrActual = ptrActual -> ptrSig;
	}
	printf("NULL\n");
}

int menu(void){
	int choice;
	printf("1. Insertar nodo\n");
	printf("2. Eliminar nodo\n");
	printf("3. Salir\n");
	printf("Ingrese su eleccion: ");
	scanf("%d", &choice);
	return choice;
}


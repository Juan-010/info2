#include <stdio.h>
#include <stdlib.h>
#include "colas.h"
void enqueue(char valor, ptrNodoCola * ptrHead, ptrNodoCola * ptrTail){
	ptrNodoCola ptrNuevo = malloc(sizeof(NodoCola));
	if(ptrNuevo != NULL) {
		
		ptrNuevo -> dato = valor;
		ptrNuevo -> ptrSig = NULL;
		
		if (isEmpty(*ptrHead))
			*ptrHead = ptrNuevo;
		else
			(*ptrTail) -> ptrSig = ptrNuevo;
		
		*ptrTail = ptrNuevo;
		printf("Se ha agregado \'%c\' correctamente\n", valor);
	}
	else {
		fprintf(stderr, "No se ha podido agregar por falta de memoria\n");
	}

}

char dequeue(ptrNodoCola * ptrHead, ptrNodoCola * ptrTail){
	if (isEmpty(*ptrHead)) {
		printf("No se puede eliminar un dato porque la cola está vacía\n");
		return '\0';
	}
	else {
		char valor = (*ptrHead) -> dato;
		ptrNodoCola tmpPtr = *ptrHead;
		*ptrHead = (*ptrHead) -> ptrSig;
		if (isEmpty(*ptrHead))
			*ptrTail = NULL;
		free(tmpPtr);
		return valor;
	}
}

void printCola(ptrNodoCola ptrHead){
	ptrNodoCola ptrActual = ptrHead;
	while(ptrActual != NULL){
		printf("%c ---> ", ptrActual -> dato);
		ptrActual = ptrActual -> ptrSig;	
	}
	printf("NULL\n");
}
int isEmpty(ptrNodoCola ptrHead){
	return ptrHead == NULL;
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

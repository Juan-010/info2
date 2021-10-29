#include <stdio.h>
#include <stdlib.h>
#include "arboles.h"

void insertarNodo(ptrNodoArbol * ptrRaiz, int valor){
	if (*ptrRaiz == NULL) { //Nodo sin asignar
		
		*ptrRaiz = malloc(sizeof(NodoArbol));
		
		if (*ptrRaiz != NULL) { //Memoria disponible
			(*ptrRaiz) -> dato = valor;
			(*ptrRaiz) -> ptrIzq = NULL;
			(*ptrRaiz) -> ptrDer = NULL;
		}		
		
		else
			printf("No se insertó %d por falta de memoria\n", valor);
	} // Fin Nodo sin asignar
	
	else { //Nodo ya asignado
		
		if(valor < (*ptrRaiz) -> dato)
			insertarNodo(&((*ptrRaiz) -> ptrIzq), valor);
		
		else if(valor > (*ptrRaiz) -> dato)
			insertarNodo(&((*ptrRaiz) -> ptrDer), valor);
		
		else
			printf("dup");
	
	} //Fin Nodo ya asignado
}
void inOrden(ptrNodoArbol ptrRaiz){
	if (ptrRaiz != NULL){
		inOrden(ptrRaiz -> ptrIzq);
		printf("%d ", ptrRaiz -> dato);
		inOrden(ptrRaiz -> ptrDer);
	}
}

void preOrden(ptrNodoArbol ptrRaiz){
	if (ptrRaiz != NULL){
		printf("%d ", ptrRaiz -> dato);
		preOrden(ptrRaiz -> ptrIzq);
		preOrden(ptrRaiz -> ptrDer);
	}
}
void postOrden(ptrNodoArbol ptrRaiz){
	if (ptrRaiz != NULL){
		postOrden(ptrRaiz -> ptrIzq);
		postOrden(ptrRaiz -> ptrDer);
		printf("%d ", ptrRaiz -> dato);
	}
}

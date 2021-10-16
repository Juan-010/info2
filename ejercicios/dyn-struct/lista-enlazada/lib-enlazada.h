#ifndef libEnlazada
#define libEnlazada
#include <stdio.h>
#include <stdlib.h>

struct nodo {
	char dato; //Datos (char, int, long, float)
	struct nodo * ptrSig; //Puntero al nodo siguiente	
};

typedef struct nodo Nodo;
typedef struct nodo * ptrNodo; //ptrNodo == Nodo * == struct nodo *

void insert(ptrNodo *, char);
char delete(ptrNodo *, char);
int isEmpty(Nodo *);
void printList(Nodo *);
int menu(void);
#endif

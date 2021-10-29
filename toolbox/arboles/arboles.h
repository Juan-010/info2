#ifndef ARBOLES
#define ARBOLES 

struct nodoArbol{
	int dato;
	struct nodoArbol *ptrIzq;
	struct nodoArbol *ptrDer;
};

typedef struct nodoArbol NodoArbol;
typedef struct nodoArbol * ptrNodoArbol;

void insertarNodo(ptrNodoArbol *, int);
void inOrden(ptrNodoArbol);
void preOrden(ptrNodoArbol);
void postOrden(ptrNodoArbol);

#endif

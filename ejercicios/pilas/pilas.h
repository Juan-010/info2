#ifndef PILAS
#define PILAS
struct nodoPila{
	char dato;
	struct nodoPila *ptrSig;
};
typedef struct nodoPila NodoPila;
typedef struct nodoPila * ptrNodoPila;

void push(ptrNodoPila *, char);
int pop(ptrNodoPila *);
int isEmpty(ptrNodoPila);
void printPila(ptrNodoPila);
int menu(void);
#endif

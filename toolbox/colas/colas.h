#ifndef COLAS
#define COLAS
struct nodoCola {
	char dato;
	struct nodoCola *ptrSig;
};

typedef struct nodoCola NodoCola;
typedef struct nodoCola * ptrNodoCola;

void enqueue(char, ptrNodoCola *, ptrNodoCola *);
char dequeue(ptrNodoCola *, ptrNodoCola *);
void printCola(ptrNodoCola);
int isEmpty(ptrNodoCola);
int menu(void);
#endif

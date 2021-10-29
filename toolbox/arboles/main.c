#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "arboles.h"

int main(void){
	ptrNodoArbol ptrRaiz = NULL;
	srand(time(NULL));	
	for(int i = 0; i < 10; i++){
		int randInt = (rand() % 20) + 1;
		printf("%3d", randInt);
		insertarNodo(&ptrRaiz, randInt);
	}
	printf("\n");
	printf("Enorden: ");
	inOrden(ptrRaiz);
	printf("\n");
	printf("Preorden: ");
	preOrden(ptrRaiz);
	printf("\n");
	printf("Postorden: ");
	postOrden(ptrRaiz);
	printf("\n");
	return 0;
}

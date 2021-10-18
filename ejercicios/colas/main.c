#include <stdio.h>
#include <stdlib.h>
#include "colas.h"
int main(void){
	ptrNodoCola ptrHead = NULL;
	ptrNodoCola ptrTail = NULL;

	while(1){
		switch (menu()) {
			case 1:
				printf("Ingrese un caracter: ");
				char valor;
				scanf(" %c", &valor);
				enqueue(valor, &ptrHead, &ptrTail);
				printCola(ptrHead);
				break;
			case 2:
				dequeue(&ptrHead, &ptrTail);
				printCola(ptrHead);
				break;
			case 3:
				exit(EXIT_SUCCESS);	
				break;
				
		}
	}
}

#include <stdio.h>
#include <stdlib.h>
#include "pilas.h"
int main(void){
	ptrNodoPila pila1 = NULL;
	while(1){
		switch(menu()){
		case 1:
			printf("Ingrese el valor: ");
			char tmp;
			scanf(" %c", &tmp);
			push(&pila1, tmp);
			printPila(pila1);
			break;
		case 2:
			pop(&pila1);
			printPila(pila1);
			break;
		case 3:
			exit(EXIT_SUCCESS);
			break;
		}
	}
}

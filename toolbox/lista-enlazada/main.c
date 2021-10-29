#include <stdio.h>
#include <stdlib.h>
#include "enlazada.h"
int main(void){
	ptrNodo ptrInicio = NULL;
	char tmpDato;
	while(1){
		int choice = menu();
		switch (choice) {
			case 1:
				scanf(" %c", &tmpDato);
				insert(&ptrInicio, tmpDato);
				printList(ptrInicio);
				break;
			
			case 2:
				scanf(" %c", &tmpDato);
				if (delete(&ptrInicio, tmpDato)){
					printf("Se ha eliminado \'%c\' correctamente.\n", tmpDato);
					
				}
				else{
					printf("No se ha encontrado \'%c\'.\n", tmpDato);
				}
				printList(ptrInicio);
				break;
			
			case 3:
				exit(EXIT_SUCCESS);
				break;	
		}
	}
}

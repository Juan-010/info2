#include <stdio.h>
int main(void){
	int lineas = 1, carac = 0; //No se pueden escribir 0 lineas
	char c;
	while((c = getchar()) != EOF){
		if(c == '\n')
			lineas++;
		carac++;
	}
	printf("\nLineas: %d\tCaracteres: %d\n", lineas, carac); 
	return 0;
}


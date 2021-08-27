#include <stdio.h>
int main(void){
	int lineas = 1, carac = 0; //No se pueden escribir 0 lineas
	char cad[1000];
	scanf("%[^EOF]s", cad);
	
	int i = 0;
	while(cad[i] != 0){
		carac++;
		if (cad[i] == '\n')
			lineas++;
	}
	printf("\nLineas: %d\tCaracteres: %d\n", lineas, carac); 
	return 0;
}


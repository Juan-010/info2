#include <stdio.h>
int main(void){
	char cad[100];
	printf("Ingrese una cadena: ");
	scanf("%[^\n]s", cad);
	
	int i = 0;
	while(cad[i] != 0){
		printf("'%c'\t%d\t0x%X\n", cad[i], cad[i], cad [i]);
		i++;
	}	
	return 0;
}


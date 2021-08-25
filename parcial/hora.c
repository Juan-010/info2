#include <stdio.h>
#include <stdlib.h>
int main(void){
	char cadena[6];
	unsigned char hora, min;
	printf("Ingrese la hora en fomato 'HH:MM': ");
	scanf("%s", cadena);
	
	cadena[2] = '\0';
	hora = atoi(cadena);	
	min = atoi(cadena + 3);

	printf("Horas: %d\n", hora);
	printf("Minutos: %d\n", min);
	return 0;
}

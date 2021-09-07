/*
Escribir un programa que muestre el valor
de un bit a eleccion de una variable numerica 
de 8 bits. Tanto el numero como el bit a leer 
se pasan por lınea de comandos. La interaccion 
con el usuario debe ser como se muestra en el 
Listado 5.
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
	if(argc != 3){
		printf("Uso: %s <num> <bit>\n", argv[0]);
		return 1;
	}
	unsigned char bit = (unsigned char) atoi(argv[2]);
	unsigned char value = (unsigned char) atoi(argv[1]);
	unsigned char mask = 1 << bit;
	printf("El bit %u de %u es %u\n", bit, value, value & mask ? 1 : 0);
	return 0;
}
		

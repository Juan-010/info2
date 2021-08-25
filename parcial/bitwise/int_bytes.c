/*
Escribir un programa que reciba por lınea 
de comandos un entero de 32 bits e imprima 
en pantalla el valor de los bytes que lo 
componen en notacion hexadecimal. Ver listado 8.
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
	if(argc != 2){
		printf("Uso: %s <num>\n", argv[0]);
		return 1;
	}
	unsigned int num = (unsigned int) atoi(argv[1]);
	
	printf("%u = %02X %02X %02X %02X\n", num, (num >> 24) & 255, (num >> 16) & 255, (num >> 8) & 255, num & 255);
	return 0;
}

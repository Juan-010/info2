/*
Escribir un programa que realice la suma
de dos enteros pasados desde la linea de 
comandos, y tenga la salida mostrada en 
el Listado 5.
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char * argv[]){
	if(argc != 3){
		printf("ERROR: debe ejecutarse\n %s <entero1> <entero2>\n", argv[0]);
		return 1;
	}
	else{
		int a = atoi(argv[1]), b = atoi(argv[2]);
		printf("%d + %d = %d", a, b, a+b);
		return 0;
	}
}  

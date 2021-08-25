/*
Escribir un programa que le solicite al usuario 
ingresar una cadena, la cual puede contener espacios,
y muestre los valores numericos de los caracteres que 
la componen (ASCII) en formato decimal y
hexadecimal.
La salida del programa debe ser como se muestra en el Listado 2.
*/
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


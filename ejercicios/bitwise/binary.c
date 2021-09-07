/*
Escribir un programa que imprima en notacion 
binaria un numero de 8 bits recibido desde la 
lınea de comandos. El listado 1 muestra el 
esqueleto del programa con una posible 
implementacion de la funcion para imprimir en 
notacion binaria una variable tipo unsigned char. 
Completar el cuerpo de la funcion main() para que 
el programa tenga la interaccion del usuario 
como se muestra en el listado 2. Al ejecutar 
el programa sin argumentos, el mismo muestra 
la forma correcta de uso indicando que espera 
recibir un valor numerico como argumento.
*/
#include <stdio.h>
#include <stdlib.h>

void binary_print (unsigned char);

int main (int argc, char *argv[]){
	if(argc == 2){
		binary_print((unsigned char) atoi(argv[1]));
		return 0;
	}
	else{
		printf("Uso: %s <num>\n", argv[0]);
		return 1;
	}
}

void binary_print ( unsigned char val){
	unsigned char b , mask = 1 << 7;

	for (b = 1; b <= 8 * sizeof (unsigned char); b++){
		putchar(val & mask ? '1' : '0');
		mask >>= 1;
	}
}


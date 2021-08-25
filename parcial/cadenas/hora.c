/*El programa del Listado 4 convierte la hora 
ingresada como cadena con el formato HH:MM a los
correspondientes valores enteros para la hora y 
los minutos. Usando las funciones de la biblioteca
estandar, completar el codigo fuente donde lo 
indica el comentario. Esto puede realizarse con solo 3
lıneas de codigo. 
(Nota: suponer que el usuario del programa ingresa la 
hora siempre en el formato solicitado.)
*/
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

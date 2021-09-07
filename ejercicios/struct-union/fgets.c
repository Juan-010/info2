#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char nombre[100];
	char edad;
	long long int dni;
} persona;

int main(void){
	persona p1;
	printf("Nombre: %s\nEdad: %d\nDNI: %lld\n", p1.nombre, p1.edad, p1.dni);
	return EXIT_SUCCESS;
}

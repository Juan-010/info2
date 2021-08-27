#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]){
	
	if (argc != 3){
		fprintf(stderr, "Uso: %s <entrada> <salida>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	
	FILE *in = fopen(argv[1], "r");

	if (in == NULL){
		fprintf(stderr, "Ocurrio un error al abrir el archivo de entrada.\n");
		exit(EXIT_FAILURE);
	}
	else
		fprintf(stdout, "El archivo de entrada se ha abierto correctamente.");

	FILE *out = fopen(argv[2], "w");

	if (in == NULL){
		fprintf(stderr, "Ocurrio un error al crear el archivo de salida.\n");
		exit(EXIT_FAILURE);
	}
	else
		fprintf(stdout, "El archivo de salida se ha creado correctamente.");
	
	int count = 0, ch;
	while ((ch = fgetc(in)) != EOF)
		if (count++ % 3 == 0)
			fputc(ch, out);
	
	if (fclose(in) != 0 || fclose(out) != 0)
		fprintf(stderr, "Error al cerrar los archivos abiertos.\n");
	return EXIT_SUCCESS;
}

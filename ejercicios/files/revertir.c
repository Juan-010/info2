#include <stdio.h>
#include <stdlib.h>
#define CNTL_Z '\032' /* eof */
#define SLEN 50
int main(void){
	char file[SLEN];
	char ch;

	puts("Ingrese el nombre del archivo a procesar:");
	fgets(file, 50, stdin);

	FILE *fp = fopen(file, "rb");

	if(fp == NULL){
		fprintf(stderr, "No se puede abrir el archivo %s.\n", file);
		exit(EXIT_FAILURE);
	}
	else
		fprintf(stdout, "El archivo %s se ha abierto correctamente.\n", file);
	
	long last;
	fseek(fp, 0, SEEK_END);
	last = ftell(fp);
	
	long count;
	for(count = 1; count <= last; count++){
		fseek(fp, -count, SEEK_END);
		ch = fgetc(fp);
		if (ch != CNTL_Z && ch != '\r')
			putchar(ch);
		}
		putchar('\n');
		fclose(fp);
		
		return 0;
}


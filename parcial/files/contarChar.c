#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]){
	if (argc != 2){
		fprintf(stderr, "Uso: %s <path relativo>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	FILE *fp = fopen(argv[1], "r");
	if(fp == NULL){
		fprintf(stderr, "Error al leer el archivo. Has puesto la ruta relativa?\n");	
		exit(EXIT_FAILURE);
	}
	char ch;	
	long int count = 0;
	
	while((ch =fgetc(fp)) != EOF){
		fputc(ch, stdout);
		count++;
	}

	fclose(fp);
	printf("El archivo %s tiene %ld caracteres\n", argv[1], count); 
	return EXIT_SUCCESS;
}

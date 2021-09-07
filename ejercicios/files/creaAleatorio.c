#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int numCta;
	char apellido[80];
	char nombre[80];
	double saldo;
} Cliente;

int main(void){
	
	Cliente tmp;

	FILE *fp = fopen("./textfiles/credito.dat", "wb");
	
	if(fp == NULL){
		fprintf(stderr, "El archivo no pudo abrirse.\n");
		exit(EXIT_FAILURE);
	}
	
	printf("Ingrese el numero de cuenta, 0 para terminar la entrada: ");
	scanf("%d", &tmp.numCta);

	while(tmp.numCta != 0){
		printf("Introduzca el apellido, nombre y saldo.\n");
		fscanf(stdin, "%s%s%lf", tmp.apellido, tmp.nombre, &tmp.saldo);
		fseek(fp, (tmp.numCta-1) * sizeof (Cliente), SEEK_SET);
		fwrite(&tmp, sizeof (Cliente), 1, fp);
		printf("Ingrese el numero de cuenta, 0 para terminar la entrada: ");
		scanf("%d", &tmp.numCta);
	}
	fclose(fp);
	return EXIT_SUCCESS;
}

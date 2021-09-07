#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){
	int num;
	float res;
/*	
	FILE *fp = fopen("./textfiles/sqrt_f/salida.dat", "w");
	if(fp == NULL){
		fprintf(stdout, "El archivo no pudo abrirse.\n");
		return EXIT_FAILURE;
	}
	else
		fprintf(stdout, "El archivo se creo con exito para escritura\n");

	FILE *err = fopen("./textfiles/sqrt_f/error.dat", "w");
	if(err == NULL){
		fprintf(stdout, "El archivo de errores no pudo abrirse.\n");
		return EXIT_FAILURE;
	}
	else
		fprintf(stdout, "El archivo de errores se creo con exito para escritura\n");
*/	
	printf("Ingrese un numero, 0 para terminar:\n");

	do{
		scanf("%d", &num);
		
		if(num > 0){
			res = sqrt(num);
			fprintf(stdout, "%f\n", res);
		}
		else if(num < 0)
			fprintf(stderr, "No valen numeros negativos: %d.\n", num);
		
	}while(num != 0);
	
//	fclose(fp);
//	fclose(err); 
	
	return EXIT_SUCCESS;
}

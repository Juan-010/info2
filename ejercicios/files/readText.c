#include<stdio.h>
#include<stdlib.h>
int main(void){
	char p1;
	FILE *ptrArchivo;
	ptrArchivo = fopen("textfiles/readText.txt","r");
	
	if(ptrArchivo != NULL)
		while((p1 = fgetc(ptrArchivo)) != EOF){
			if(p1 == ';')
				printf("\n");
			else
				printf("%c", p1);
		}
	printf("\n%d\n", feof(ptrArchivo));
	fclose(ptrArchivo); // cierro el archivo
	return 0;//EXIT_SUCCESS;
}

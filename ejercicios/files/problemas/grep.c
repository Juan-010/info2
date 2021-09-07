/*DUP que tome dos argumentos de la línea de comandos, el primero 
es un caracter y el segundo es el nombre del archivo. 
El programa debe imprimir solamente los renglones que tengan el caracter
ingresado.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]){
	
	char file[80]; 
	strcpy(file, argv[2]);
	char check = argv[1][0];
	int goodLines[80] = {0}; 

	FILE *fp = fopen(file, "r");
	if (fp == NULL){
		puts("ERROR");
		exit(EXIT_FAILURE);
	}
	
	char ch;
	int count = 0, line = 1;
	int flag = 0;
	while((ch = fgetc(fp)) != EOF){

		if(ch == check && flag == 0){
			goodLines[count] = line;
			count++;
			flag = 1;
		}
		if(ch == '\n'){
			line++;
			flag = 0;
		}
	}
	
	int i = 0;
	line = 1;
	flag = 0;
	while(goodLines[i] != 0){
		ch = fgetc(fp);
		if(line == goodLines[i])
			fputc(ch, fp);
			flag = 1;
		if(ch == '\n')
			line++;
			flag = 0;
	}
	}
	return 0;
}
	


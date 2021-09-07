/*
Diseñe un programa en lenguaje C, que cargue los datos de los alumnos para llevar un registro. El programa deberá:
a) Cargar, Legajo, Apellido, Nombre, Especialidad, Asignatura.
b) Dentro de cada asignatura deberá colocar la comisión donde cursó, docente teórico, jefe de trabajos prácticos.
c) En los docentes deberá figurar las calificaciones del parcial 1, parcial 2, promedio, y su condición que puede ser: aprobación directa, promoción práctico, regular y libre
d) Utilice estructuras anidadas para el programa y paso por referencia de cada estructura para modificar los datos
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_SHRT 10
#define STR_LONG 80
#define FILE_NAME "alumnos.dat"
typedef struct{
	char curso[STR_SHRT];
	char docTeo[STR_LONG];
	char jtp[STR_LONG];
} asignatura;

typedef struct{
	short unsigned int legajo;
	char apell[STR_LONG];
	char nomb[STR_LONG];
	char espec[STR_LONG];
	asignatura clase;
	float nota1;
	float nota2;
	float promedio;
	char cond[STR_LONG];
} alumno;
alumno nuevoAlumno(int leg, char apellido[], char nombre[], char espec[], char clase[], float nota1, float nota2){
	asignatura com = {clase, "", ""};
	alumno tmp = {.leg = leg, nombre, espec, com, nota1, nota2, (nota1+nota2)/2, ""};
	return tmp;
}
int main(void){
	FILE *fp = fopen(FILE_NAME, "rb+");
		
		if (fp == NULL){ //Crea el archivo si no existe
			printf("El archivo %s no existe. Creando...\n", FILE_NAME);
			
			fp =  fopen(FILE_NAME, "wb"); 
			fclose(fp);
			
			fp =  fopen(FILE_NAME, "rb+");
			
			if(fp == NULL){ //Cierra si el error persiste
				fprintf(stderr, "Error al crear el archivo. El programa se cerrará.\n");
				exit(EXIT_FAILURE);
			}
		}
	int choice;
	puts("Elige una opcion");
	puts("1 - Añadir alumno");	
	puts("2 - Leer alumnos");	
	puts("3 - Salir");
	scanf("%d", &choice);	
	switch(choice){
		case 1:
			int legajo;
			char nombre[STR_LONG],apellido[STR_LONG],especialidad[STR_LONG], clase[STR_SHRT];
			float nota1, nota2;
			printf("Ingrese el legajo del alumno: ");
			scanf("%d", &legajo);
			printf("Ingrese el nombre del alumno: ");
			scanf("%s", nombre);
			printf("Ingrese el apellido del alumno: ");
			scanf("%s", apellido);
			printf("Ingrese la especialidad del alumno: ");
			scanf("%s", especialidad );
			printf("Ingrese la nota 1 del alumno: ");
			scanf("%f", &nota1);
			printf("Ingrese la nota 2 del alumno: ");
			scanf("%f", &nota2);
			printf("Ingrese la clase del alumno: ");
			scanf("%s", clase);
		
			fseek(fp, 0, SEEK_END);
			fwrite(&nuevoAlumno(legajo, nombre, apellido, especialidad, clase, nota1, nota2), sizeof(alumno), 1, fp);
			break;
		case 2:
			alumno al1;
			while(fread(&al1, sizeof(alumno), 1, fp) > 0)
				printf("%d\t%s\t%s\t%s\t%s\t%s\t%s\t%f\t%f\t%f\t%s\n", al1.legajo, al1.apell, al1.nomb, al1.espec, al1.clase.curso, al1.clase.docTeo, al1.clase.jtp, al1.nota1, al1.nota2, al1.promedio, al1.cond);
			break;
		case 3:
			break;
}
	return 0;
}

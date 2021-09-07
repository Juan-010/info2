#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_SHRT 10
#define STR_LONG 80
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

int main(void){
	alumno arr[MAX];
	printf("Ingrese la cantidad de alumnos que desea cargar: ");
	int cant;
	scanf("%d", cant);
	for(int i = 0, 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define LONGITUD 10
#define PI 3.14159265358979323846264338327950288 
void float2str(float, char *, int);

int main(void){
	float val = PI;
	char cad[LONGITUD];
	
	float2str(val, cad, 2);
	printf("%s\n", cad);
	float2str(val, cad, 4);
	printf("%s\n", cad);
	float2str(val, cad, 6);
	printf("%s\n", cad);
	
	return 0;
}

void float2str(float value, char *str, int prec){
	int intVal = (int) value;
	int decVal = (int) ((value - intVal) * pow(10, prec)) ;
	sprintf(str, "%d.%d", intVal, decVal);
}

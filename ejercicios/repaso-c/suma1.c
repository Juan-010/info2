#include <stdio.h>
int main(void){
  int num1, num2;
  fprintf(stdout, "Ingrese el primer entero: ");
  fscanf(stdin, "%d", &num1);
  fprintf(stdout, "Ingrese el segundo entero: ");
  fscanf(stdin, "%d", &num2);
  int suma = num1+num2;
  fprintf(stdout, "La suma es: %d", suma);
	return 0;
}

#include <stdio.h>
#include <math.h>
int main(void){
  int num;
  do{
    fprintf(stdout, "Ingrese un numero entero: ");	
    fscanf(stdin, "%d", &num);
    if (num < 0)
      fprintf(stderr, "NUMEROS NEGATIVOS NO TIENEN RAIZZZZZZZZ\n");	
    else
      fprintf(stdout, "La raiz de %d es: %f\n", num, sqrt((float) num));	
	  } while(num != 0);
    
  return 0;
}

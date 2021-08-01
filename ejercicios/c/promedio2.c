#include <stdio.h>
int main(void){
  int cant = 0, tmp, suma = 0;
  do{
    printf("Ingrese un numero (0 para calcular): ");
    scanf("%d", &tmp);
    if (tmp != 0){
      suma += tmp;
      cant++;
    } 
  }while(tmp != 0);
  printf("El promedio es de: %.2f\n", ((float) suma)/cant);
	return 0;
}

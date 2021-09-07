#include <stdio.h>
int main(void){
  int cant;
  printf("Cuantos numeros a promediar seran ingresados: ");
  scanf("%d", &cant);
  int tmp, suma = 0;
  for(int i = 0; i < cant; i++){
    printf("Ingrese el %d° numero: ", i+1);
    scanf("%d", &tmp);
    suma += tmp;
  }
  printf("El promedio es de: %.2f\n", ((float) suma)/cant);
	return 0;
}

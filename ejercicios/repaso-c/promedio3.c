#include <stdio.h>
double promedio(int *, int);
int main(void){
  int cant = 5, nums[5];
  for(int i = 0; i < cant; i++){
    printf("Ingrese el %d° numero: ", i+1);
    scanf("%d", nums+i);
  }
  printf("El promedio es de: %.2f\n", promedio(nums, cant));
	return 0;
}

double promedio (int *nums, int cant){
  int suma = 0;
  for(int i = 0; i < cant; i++)
    suma += *(nums+i);
  return ((double) suma)/cant;
}

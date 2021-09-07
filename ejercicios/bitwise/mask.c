#include <stdio.h>
int main(void){
  unsigned short num, mask = 1; //Tipo de dato short es de 2 bytes 
  
  printf("Introduzca un numero de 16 bits: "); 
  scanf("%hu", &num);
  
  if((num & mask << 8) && (num & mask << 9) && (num & mask << 12))
    printf("Cumple la condicion\n");
  else 
    printf("No cumple la condicion\n");
  return 0;
}

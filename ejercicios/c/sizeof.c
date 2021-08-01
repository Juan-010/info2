#include <stdio.h>
int main(void){
  printf("Char: %d bytes\n", sizeof (char));
  printf("Signed Char: %d bytes\n", sizeof (signed char));
  printf("Unsigned Char: %d bytes\n", sizeof (unsigned char));
  printf("Int: %d bytes\n", sizeof (int));
  printf("Signed Int: %d bytes\n", sizeof (signed int));
  printf("Unsigned Int: %d bytes\n", sizeof (unsigned int));
  printf("Short Int: %d bytes\n", sizeof (short int));
  printf("Long Int: %d bytes\n", sizeof (long int));
  printf("Float: %d bytes\n", sizeof (float));
  printf("Double: %d bytes\n", sizeof (double));
  return 0;
}

#include <stdio.h>
int main(void){
  int x = 5;
  int * const ptr = &x;
  *ptr = 10;    
  return 0;
}

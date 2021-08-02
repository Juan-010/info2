#include <stdio.h>
int main(void){
  extern int x;
  printf("%d\n", x);
  return 0;
}
int x = 3;

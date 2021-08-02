#include <stdio.h>

int contador(void){
  static int x = 0;
  return ++x;
}
int main(void){
  for(int i = 0; i < 10; i++)
    printf("%d\n", contador());
  return 0;
}

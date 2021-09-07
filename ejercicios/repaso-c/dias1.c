#include <stdio.h>
#include "dias.h"
int main(void){
  int i, j;
  for (i = 0; i < 5; i++){
    for (j = 0; j < 10; j++)
      printf("%c", dato[i][j]);
    printf("\n");
  }
  return 0;
}

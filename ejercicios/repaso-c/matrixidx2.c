#include <stdio.h>
#define M 3 
#define N 2
int main(void){
  for (int i = 0; i < N; i++){
    for (int j = 0; j < M; j++)
      printf("(%d, %d)\t", i, j);
    printf("\n");
  } 	
	return 0;
}

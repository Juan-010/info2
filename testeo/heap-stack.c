#include <stdio.h>
#include <stdlib.h>
int main(void){
  int a = 10, b = 15, c = 20;
  int *ptra = &a;
  int *ptrb = &b;
  int *ptrc = &c;
  int *ptrd = (int *)malloc(sizeof(int));
  int *ptre = (int *)malloc(sizeof(int));
  int *ptrf = (int *)malloc(sizeof(int));
  *ptrd = 25;
  *ptre = 30;
  *ptrf = 35;
  printf("ptra (Stack): %p\n", ptra);
  printf("ptrb (Stack): %p\n", ptrb);
  printf("ptrc (Stack): %p\n", ptrc);
  printf("ptrd (Heap): %p\n", ptrd);
  printf("ptre (Heap): %p\n", ptre);
  printf("ptrf (Heap): %p\n", ptrf);
  return 0;
}

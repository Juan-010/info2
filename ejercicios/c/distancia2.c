#include <stdio.h>
#include <math.h>
float distancia(float *, float *);
int main(void){
  float p1[] = {1.0, 2.0}, p2[] = {3.0, 4.0};
  printf("La distancia entre ( %g, %g) y ( %g, %g) es %g\n", p1[0], p1[1], p2[0], p2[1], distancia(p1, p2));
	return 0;
}
float distancia(float *p1, float *p2){
  return sqrt(pow(*p1 - *p2, 2) + pow(*(p1+1) - *(p2+1), 2));
}

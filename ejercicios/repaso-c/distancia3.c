#include <stdio.h>
#include <math.h>
typedef struct{
  float x;
  float y;
} punto;
float distancia(punto, punto);
int main(void){
  punto p1 = {1, 2}, p2 = {3, 4};
  printf("La distancia entre ( %g, %g) y ( %g, %g) es %g\n", p1.x, p1.y, p2.x, p2.y, distancia(p1, p2));
	return 0;
}
float distancia(punto p1, punto p2){
  return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

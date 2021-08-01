#include <stdio.h>
#include <math.h>
float distancia(float, float, float, float);
int main(void){
  printf("La distancia entre ( %g, %g) y ( %g, %g) es %g\n", 1.0, 2.0, 3.0, 4.0, distancia(1.0, 2.0, 3.0, 4.0));
  printf("La distancia entre ( %g, %g) y ( %g, %g) es %g\n", 2.0, 3.0, 3.0, 2.0, distancia(2.0, 3.0, 3.0, 2.0));
  printf("La distancia entre ( %g, %g) y ( %g, %g) es %g\n", -1.0, -1.0, 2.0, 2.0, distancia(-1.0, -1.0, 2.0, 2.0));	
	return 0;
}
float distancia(float x1, float y1, float x2, float y2){
  return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

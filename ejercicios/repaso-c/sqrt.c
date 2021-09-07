#include <stdio.h>
#include <math.h>
int main(void){
  float num, exp;
  do{
    printf("Num: ");
    scanf("%f", &num);
    printf("= %.2f\n", sqrt(num));
  }while (num != 0);
 
	return 0;
}

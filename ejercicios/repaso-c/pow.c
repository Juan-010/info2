#include <stdio.h>
#include <math.h>
int main(void){
  float num, exp;
  do{
    printf("Num: ");
    scanf("%f", &num);
    printf("Exp: ");
    scanf("%f", &exp);
    printf("= %.2f\n", pow(num, exp));
  }while (num != 0);
 
	return 0;
}

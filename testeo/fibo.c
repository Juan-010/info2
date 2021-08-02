#include <stdio.h>
int fibonacci(int);
int main(void){
  int n;
  scanf("%d", &n);
  for (int i = 0; i<= n ; i++)
    printf("%d  ", fibonacci(i));
  printf("\n");
  return 0;
}
int fibonacci(int n){
  return (n==1||n==0) ? n : (fibonacci(n-1) + fibonacci(n-2));
} 

#include <unistd.h>
int main(void){
  if((write(1, "Hola mundo!\n", 12)) != 12)
  write(2, "ERROR\n", 6);	
	return 0;
}

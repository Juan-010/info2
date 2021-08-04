#include <unistd.h>
#include <stdio.h>
int main(void){
  char buffer[128];
  int nread;
  nread = read(0, buffer, 128);
  if(nread == -1)
    write(2, "Error de lectura\n", 17);
  if((write(1, buffer, nread)) != nread)
    write(2, "Error de escritura\n", 19);	
  printf("%d", nread);
	return 0;
}

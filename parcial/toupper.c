#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char const *argv[]){
	char cadena[100] = {0};
	
	int i = 0;
	while(argv[1][i] != 0){
		cadena[i] = toupper(argv[1][i]);
		i++;
	}
	printf("%s\n", cadena);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
void print_bits(unsigned char);

int main(int argc, char *argv[]){
	if(argc != 3){
		printf("Uso: %s <num> <bit>", argv[0]);
		return 1;
	}
	unsigned char num = (unsigned char) atoi(argv[1]); 
	unsigned char bit = (unsigned char) atoi(argv[2]); 
	printf("%d = ", num);
	print_bits(num);
	
	num ^= 1 << bit;

	printf("%d = ", num);
	print_bits(num);
	return 0;
}

void print_bits(unsigned char num){
	unsigned char mask = 1 << 7;
	for(int i = 0; i < sizeof(unsigned char) * 8; i++){
		printf("%c", num & mask ? '1' : '0');
		mask >>= 1;
	}
	printf("\n");
}

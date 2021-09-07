#include <stdio.h>
#include <stdint.h>
float btof(uint8_t byte1, uint8_t byte2, uint8_t byte3, uint8_t byte4){
	uint32_t aux = (byte4 << 24) + (byte3 << 16) + (byte2 << 8) + byte1;
	union convert{
		uint32_t auxil;
		float num;
	}convertir = {.auxil = aux};
	return convertir.num;
}
int main(void){
	printf("%.2f\n", btof(0,0,0x20,0x40));
	return 0;
}

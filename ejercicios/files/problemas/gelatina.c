#include <stdio.h>
int main(void){
FILE *fp;
int k;
fp = fopen("gelatina", "w");
for (k = 0; k < 30; k++)
	fputs("Marcvia come gelatina.", fp);
fclose(fp);
return 0;
}

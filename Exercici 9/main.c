#include <stdio.h>
#include "functions.h"

void main() {

	unsigned long long decimal;
	int i = 0;
	char bin[10];

	decimal = validar(MSG, &i);
	sprintf(bin, "%llu",  decimal);
	printf("El binari %llu és %llu en decimal", decimal, decimalizar(&bin, i));
}

#include <stdio.h>
#include "functions.h"

void main() {

	int num, aux;
	num = validar(MSG);
	aux = calc(num);
	printf("\nLa suma dels valors és: %d", aux);
}

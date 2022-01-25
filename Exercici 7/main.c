#include <stdio.h>
#include "functions.h"

void main() {

	int size, aux, i;
	size = validar(MSG);
	int num[size];
	omplir(num, size);
	printf("\nLa mitjana dels valors és: %d\n"
			"El valor més gran és %d i el "
			"més petit és %d.\n", mitjana(num, size)
			, max(num, size), min(num, size));
}

#include <stdio.h>
#include "functions.h"

void main() {

	float aux, i;
	int size;
	size = validar(MSG);
	float num[size];
	omplir(num, size);
	printf("\nLa mitjana dels valors és: %.2f\n"
			"El valor més gran és %.0f i el "
			"més petit és %.0f.\n", mitjana(num, size)
			, max(num, size), min(num, size));
}

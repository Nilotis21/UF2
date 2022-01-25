#include <stdio.h>
#include "functions.h"

void main() {

	long x, y;
	x = validar(MSG);
	y = validar(MSG2);
	printf("\n%d elevat a %d és %d.\n", x, y, elevar(x, y));
}

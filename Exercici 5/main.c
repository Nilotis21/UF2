#include <stdio.h>
#include "functions.h"

void main() {

	int a, b;
	a = validar(MSG);
	b = validar(MSG2);
	printf("El valor del primer nombre era %d i ara és %d.\n\n"
			"El valor del segon nombre era %d i ara és "
			"%d.", a, change(a, b), b, change(b, a));

}

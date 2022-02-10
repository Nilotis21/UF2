/*
 * Dissenya un programa
 * que generi una llista
 * de valors aleatoris entre
 * el 15 i el 200, demani
 * un valor per teclat i informi
 * per pantalla si aquest valor
 * indicat es troba a la llista.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "functions.h"

void main() {

	int size, aux2, trobat;
	size = valint(MSG, 1, NULL);

	int num[size];

	omplir(num, size, 15, 200);

	printf(MSG6);
	scanf("%d", &aux2);
	trobat = cercar(num, size, aux2);
	if (trobat == 1) {
		printf(MSG7);
	} else {
		printf(MSG8);
	}
	mostrar(num, size);

}

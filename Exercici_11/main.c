/*
 * Dissenya un programa que inicialitzi
 * proceduralment un array amb els 100
 * primers nombres parells
 * (Nota: el 0 no és parell) i els
 * mostri per pantalla.
 *
 */

#include <stdio.h>
#include "functions.h"

void main() {

	int num[SIZE];

	omplir(num);

	for (int i = 1; i < SIZE + 1; i++) {
		if (i % 10 == 0) {
			printf("\n");
		}
		if (i != SIZE) {
			printf("%d, ", num[i]);
		} else {
			printf("%d", num[i]);
		}
	}
}

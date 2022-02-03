#include <stdio.h>
#include "functions.h"

void omplir(int *pares) {

	int i, j = 0, count = 0;

	for (i = 0; i < SIZE * 2 + 1; i++) {
		if (i % 2 == 0) {
			pares[j] = i;
			j++;
		}
	}

	for (i = 0; i < SIZE * 2 + 1; i++) {
		if (pares[i] % 2 == 0) {
			count++;
		}
	}
}

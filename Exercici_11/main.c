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

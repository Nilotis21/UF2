#include <stdio.h>
#include "functions.h"

void main() {

	int size, i;

	size = validar(MSG, 1, 50);

	int num[size];

	omplir(num, size);

	order(num, size);

	for(i = 0; i < size; i++){
		printf("%d ", num[i]);
	}


}

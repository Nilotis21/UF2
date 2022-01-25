#include <stdio.h>
#include "functions.h"

long validar(char *msg) {

	long num;
	printf("%s", msg);
	scanf("%ld", &num);

	return num;
}

long elevar(long x, long y) {

	long i, aux;

	aux = x;
	for (i = 1; i < y; i++){
		x *= aux;
	}
	return x;
}

#include <stdio.h>
#include "functions.h"

int validar(char *msg) {

	int num;
	printf("%s", msg);
	scanf("%d", &num);

	return num;
}

int change(int num1, int num2) {

	int aux;
	aux = num1;
	num1 = num2;
	num2 = aux;

	return num1;
}



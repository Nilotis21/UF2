#include <stdio.h>
#include "functions.h"

int validar(char *msg, int ini, int fin) {

	int number;

	do {
		printf(msg);
		scanf("%d", &number);
	} while (number < ini || number > fin);

	return number;
}

void omplir(int *number, int size) {

	int i;

	for (i = 0; i < size; i++) {
		number[i] = validar(MSG2, 1, 10);
	} /*Vaig intentar implementar un NULL a
	aquest 10 per a treure el limit però no vaig poder.
*/}

void order(int *number, int size) {

	int i, j, aux;

	for (i = 0; i < size; i++) {
		for (j = i + 1; j < size; j++) {
			if (number[j] > number[i]) {
				aux = number[i];
				number[i] = number[j];
				number[j] = aux;
			}

		}
	}
}

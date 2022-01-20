#include <stdio.h>
#include "functions.h"

#define SIZE 15

void main() {

	int num, i, ap = 0, sus = 0, avg_ap = 0, avg_su = 0;

	for (i = 0; i < SIZE; i++) {
		num = validar();

		sus = suspensos(num) + sus;

		ap = aprovados(num) + ap;

		avg_ap = avgap(num) + avg_ap;

		avg_su = avgsu(num) + avg_su;
	}
	printf("La quantitat d'aprovats és de %d i la de suspesos és %d.\n\n", ap, sus);
	printf("La mitjana d'aprovats és de %d i la de suspesos és %d.", avg_ap/ ap, avg_su / sus);

}
